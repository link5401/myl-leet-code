def romanToInt( s: str) -> int:
    plusDict = {
        "I":1,
        "V":5,
        "X":10,
        "L":50,
        "C":100,
        "D":500,
        "M":1000
    }

    result = 0
    i = 0

    while i < len(s) - 1:
        if plusDict[s[i]] < plusDict[s[i + 1]]:
            result -= plusDict[s[i]]
        else:
            result += plusDict[s[i]]
        i = i + 1
    return result + plusDict[s[-1]]
print(romanToInt("MCMXCIV"))

