def solutions(strs):
    if len(strs) == 0:
        return ""
    return LCP(strs, 0, len(strs) - 1)
def LCP(strs , left, right):
    if left == right:
        return strs[left]
    else:
        mid = (left + right) // 2
        lcpLeft = LCP(strs, left , mid)
        lcpRight = LCP(strs, mid + 1, right)
        return commonPrefix(lcpLeft,lcpRight)

  

def commonPrefix(left, right):
    m = min(len(left), len(right))
    for index in range(0,m):
        if left[index] != right[index]:
            return left[:index]
    return left[:m]
input = ["ab", "a"]
print(solutions(input))