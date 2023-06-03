def solutions(haystack, needle):
    if needle == haystack:
        return 0
    i = 0 
    j = len(needle)
    while j <= len(haystack):
        if haystack[i:j] == needle:
            return i
        i += 1
        j += 1
    return -1

print(solutions("sadbutsad","sad"))