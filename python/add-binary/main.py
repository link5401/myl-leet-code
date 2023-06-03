"""
Given two binary strings a and b, return their sum as a binary string.
"""
def solutions(a:str,b:str) -> str:
    stack = []
    a,b = formatBin(a,b)
    carry = False
    for i in reversed(range(len(a))):
        if a[i] == "0" and b[i] == "0":
            if not carry:
                stack.append("0")
            else:
                stack.append("1")
                carry = False
            
        elif (a[i] == "0" and b[i] == "1") or (a[i] == "1" and b[i] == "0"):
            if not carry:
                stack.append("1")
            else:
                stack.append("0")
                carry = True
        elif (a[i] == "1" and b[i] == "1"):
            if not carry:
                stack.append("0")
                carry = True
            else:
                stack.append("1")
    if carry:
        stack.append("1")
    return ''.join(stack[::-1])

def formatBin(a:str,b:str):
    n = abs(len(a) - len(b))
    if len(a) > len(b):
        for i in range(n):
            b = '0' + b
    else: 
        for i in range(n):
            a = '0' + a
    return a,b
a = "10"
b = "10"
print(solutions(a,b))