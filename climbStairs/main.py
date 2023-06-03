def solutions(n: int)->int:
    prev1 = 1
    prev2 = 0
    for i in range(1,n+1):
        cur = prev1 + prev2
        prev2 = prev1 
        prev1 = cur
    return prev1
print(solutions(4))