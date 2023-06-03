def solutions(strs):
    low,high = 1, 999
    for str in strs:
        high = min(high, len(str))
    while (low <= high):
        mid = (low + high)//2
        if isCommonPrefix(strs, mid):
            low = mid + 1
        else:
            high = mid -1
    return strs[0][:(low+high)//2]
def isCommonPrefix(strs , l):
    s = strs[0][0:l]
    for str in strs:
        if not str.startswith(s):
            return False
    return True
input= ["leetcs", "leetcode", "leeds" ,"leesin"]
print(solutions(input))