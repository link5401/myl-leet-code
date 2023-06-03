"""
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.
"""

"""Intuition"""
# def solutions(x:int) -> int:
#     for i in range(x//2):
#         if i*i <= x and (i+1)*(i+1) > x:
#             return i
#     return -1
"""
Binary search
"""
def solutions(x:int) -> int:
    if x == 0 or x == 1:
        return x
    low = 0
    high = x
    while (low <= high):
        mid = (low + high) // 2
        if (x // mid == mid):
            return mid
        if(x // mid < mid):
            high = mid - 1
        else:
            low = mid + 1
    return high
print(solutions(8))