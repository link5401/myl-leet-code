def solutions(digits):
    digits[-1] += 1
    if digits[-1] == 10:
        for i in reversed(range(len(digits))):
            if  i == 0 and digits[i] == 10:
                digits[i] = 1
                digits.append(0)
            elif digits[i] == 10:
                digits[i] = 0
                digits[i - 1] += 1
    return digits

print(solutions([1,2,4]))
