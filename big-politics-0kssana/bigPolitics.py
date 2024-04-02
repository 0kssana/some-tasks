def bigPolitics(p: list) -> int:
    k = 0
    while len(p) > 1:
        min1 = min(p)
        p.remove(min1)

        min2 = min(p)
        p.remove(min2)

        k += min1 + min2
        p.append(min1 + min2)
    return k