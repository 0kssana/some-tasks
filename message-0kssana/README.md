[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/OBvbJdRY)
# Сообщение

В сообщении, состоящем только из русских букв и пробелов, каждую букву заменили её порядковым номером в русском алфавите (А - 1, Б - 2, ..., Я - 33), а пробел - нулём. Требуется по заданной последовательности цифр найти **количество** исходных сообщений, из которых она могла получиться. В качестве входных данных передаётся последовательность цифр (в строковом представлении) длиной не более 100.

Необходимая сложность решения – O(N).

### Примеры

**Вход** (последовательность цифр): 80946

**Ответ** (число исходных сообщений): 1

**Пояснение** (список исходных сообщений, вычислять не нужно):
1. 8, 0, 9, 4, 6 — 'З ИГЕ'


**Вход**: 21705

**Ответ**: 3

**Пояснение**:
1. 2, 1, 7, 0, 5 — 'БАЖ Д'
2. 21, 7, 0, 5 — 'ФЖ Д'
3. 2, 17, 0, 5 — 'БР Д'