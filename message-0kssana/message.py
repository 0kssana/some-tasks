def message(string: str) -> int:
    combination = []
    maximum = 0
    pre_val = 0
    long = 0
    for i in range(len(string)):
        if pre_val == 1:
            long += 1
        elif pre_val == 2:
            if int(string[i]) <= 3:
                long += 1
        else:
            if int(string[i]) <= 3:
                long = 1
        if string[i] == '1' or string[i] == '2':
            pre_val = 1
        elif string[i] == '3':
            pre_val = 2
        else:
            pre_val = 0
            if long > maximum:
                maximum = long
                combination.append(long)
            elif long > 1:
                combination.append(long)
            
            long = 0
        if i == len(string) - 1 and long > 1:
            combination.append(long)
            if long > maximum:
                maximum = long
                
    algos = [1, 1]
    for i in range(2, maximum + 2):
        algos.append(algos[i - 1] + algos[i - 2])
    result = 1
    for i in range(len(combination)):
        result *= algos[combination[i]]
    if not string:
        return 0
    return result