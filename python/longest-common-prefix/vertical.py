def solutions(strs):
    if len(strs) == 0:
        return ""
    for i in range(0,len(strs[0])):
        c = strs[0][i]
        for j in range(1, len(strs)):
            if i == len(strs[j]) or c != strs[j][i]:
                return strs[0][:i]
    return strs[0]
input = ["leets","leetcode","leet","leeds"]
print(solutions(input))