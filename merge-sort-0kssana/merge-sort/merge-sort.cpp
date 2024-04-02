#include "merge-sort.hpp"
#include <iostream>
#include <memory>

List::List(std::initializer_list<int> list) {
    // Задание №1: сделать список из list
    ListElement *tail = nullptr;
    for (int number : list) {
        if (tail == nullptr) {
            this->head = std::make_unique<ListElement>(number);
            tail = this->head.get();
        } else {
            tail->next = std::make_unique<ListElement>(number);
            tail = tail->next.get();
        }
    }
}

List merge(List a, List b) noexcept {
    // Слияние двух упорядоченных списков
    List result;
    ListElement *tail =
        nullptr; // должен указывать на последний элемент списка result
    while (a.head && b.head) {
        // Выбираем меньший из a.head.value и b.head.value
        // и переносим a.head или b.head в конец result,
        // после чего переносим tail->next обратно
        // в a.head или b.head
        if (a.head->value < b.head->value) {
            if (tail == nullptr) {
                result.head = std::move(a.head);
                tail = result.head.get();
            } else {
                tail->next = std::move(a.head);
                tail = tail->next.get();
            }
            a.head = std::move(tail->next);
        } else {
            if (tail == nullptr) {
                result.head = std::move(b.head);
                tail = result.head.get();
            } else {
                tail->next = std::move(b.head);
                tail = tail->next.get();
            }
            b.head = std::move(tail->next);
        }
    }
    // переносим оставшийся список в конец result
    if (a.head) {
        if (tail == nullptr) {
            result.head = std::move(a.head);
        } else {
            tail->next = std::move(a.head);
        }
    } else if (b.head) {
        if (tail == nullptr) {
            result.head = std::move(b.head);
        } else {
            tail->next = std::move(b.head);
        }
    }
    return result;
}

void mergesort(List &list) noexcept {
    // Если список содержит менее 2 элементов, он уже упорядочен
    if (!list.head || !list.head->next) {
        return;
    }

    // 1. Определяем середину списка
    // https://ru.wikipedia.org/wiki/Нахождение_цикла#Черепаха_и_заяц
    ListElement *middle = nullptr;
    ListElement *hare = list.head.get();
    ListElement *tortoise = list.head.get();

    while (hare && hare->next) {
        middle = tortoise;
        tortoise = tortoise->next.get();
        hare = hare->next->next.get();
    }

    // 2. Переносим вторую половину в новый список
    List second;
    second.head = std::move(middle->next);
    middle->next = nullptr;

    // 3. Для каждой половины запускаем mergesort
    mergesort(list);
    mergesort(second);

    // 4. Делаем merge от результатов,
    // не забыв std::move в аргументах,
    // присваивая результат в list
    list = merge(std::move(list), std::move(second));
}