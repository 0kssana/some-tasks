[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/hiOx3_p6)
# Изограмма
**Задание**: Проверить, является ли текст изограммой, то есть не содержит ли он повторяющихся **букв** (спецсимволы не считаются). Заглавные и строчные буквы считаются одинаковыми.

Примеры:

* "abcdef" — изограмма
* "a b c d-e-f-g" — изограмма
* "abA" — не изограмма

Другие примеры смотрите в `isogram/isogram_test.cpp`. Свой код пишите в `isogram/isogram.cpp`.

Для ручной отладки я создал цель `isogram`, которая читает строку с клавиатуры, вызывает вашу функцию и выводит результат на экран.

Все переменные и функции в коде необходимо именовать в соответствии с их назначением.

Необходимо использовать библиотечные функции для работы с символами (подсказка в комментарии). 

Требуемая сложность: максимум O(Nlog(N)). Вспоминайте структуры данных с лекций, чтобы достичь необходимой сложности. 