#include "isogram.h"
#include <locale>
#include <set>

std::locale locale{""};

bool is_isogram(std::string const& word)
{
    // Функция is_isogram получает на вход строку word
    // Возвращает true, если строка является изограммой,
    // и false, если не явялется
    // Код пишите здесь

    std::set<char> set;
    int l = word.length();
    int i = 0;
    while (i < l) {
        if (! std::isalpha(word[i])) {
            i++;
            continue;
        }
        if (set.find(std::toupper(word[i])) != set.end())
            return false;
        set.insert(std::toupper(word[i]));
        i++;
    }
    return true;
}