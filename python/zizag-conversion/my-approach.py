# Time Complexity O(n)

def convert(s,numRows):
    result = ""
    distance = (numRows - 1)*2
    if (distance == 0):
        return s
    for i in range(numRows):
        zDistance = 2 * (numRows - i - 1)
        nextPoint = i
        while(nextPoint < len(s)):
            result += s[nextPoint]
            if(zDistance != distance and zDistance != 0):
                zPoint = nextPoint + zDistance
                if (zPoint < len(s)):
                    result += s[zPoint]
            nextPoint += distance
    return result
# print(convert('PAYPALISHIRING',3))
print(convert("A",1))