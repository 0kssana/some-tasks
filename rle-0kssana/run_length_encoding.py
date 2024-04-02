def decode(s):
    if not s:
        return ""

    decoded = []
    count = 0

    for char in s:
        if char.isdigit():
            count = count * 10 + int(char)
        else:
            if count == 0:
                decoded.append(char)
            else:
                decoded.append(char * count)
                count = 0

    return ''.join(decoded)


def encode(s):
    if not s:
        return ""

    encoded = []
    count = 1

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            count += 1
        else:
            if count > 1:
                encoded.append(str(count))
            encoded.append(s[i - 1])
            count = 1

    if count > 1:
        encoded.append(str(count))
    encoded.append(s[-1])

    return ''.join(encoded)
