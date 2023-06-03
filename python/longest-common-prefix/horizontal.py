def solutions(strs):
    if len(strs) == 0: 
        return ""
    result = strs[0]
    for i in range(1,len(strs)):
        while not strs[i].startswith(result):
            result = result[0:len(result) - 1]
    return result
            


input = ["dog","racecar","car"]
print(solutions(input))