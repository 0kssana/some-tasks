def sums(array: list) -> int:
    result = [0]
    for val in array:
        result = set(result + [(i + val) for i in result])
        result = list(result)
    result = len(result)
    return (result)