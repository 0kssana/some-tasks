def closest(array: list, target: int, count: int) -> list:
    a = 0
    b = len(array) - 1
    while a <= b:
        middle = (a + b) // 2
        if array[middle] == target:
            f = middle
            break
        elif array[middle] < target:
            a = middle + 1
        else:
            b = middle - 1
    if array[middle] != target:
        f = -a


    if f >= 0:
        left = f - 1
        right = f + 1
        n = 1
    else:
        left = -f - 1
        right = -f
        n = 0

    while n < count and left >= 0 and right < len(array):
        if target - array[left] <= array[right] - target:
            left -= 1
            n += 1
        else:
            right += 1
            n += 1
    while n < count and left >= 0:
        left -= 1
        n += 1
    while n < count and right < len(array):
        right += 1
        n += 1

    if count == n:
        return (list(array[left + 1:right]))