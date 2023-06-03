def solutions(s) -> bool:
    stack = []
    for c in s:
        if c in "])}":
            if not stack:
                return False
            if c == "]" and stack[-1] == "[":
                stack.pop()
            elif c == "}" and stack[-1] == "{":
                stack.pop()
            elif c == ")" and stack[-1] == "(":
                stack. pop()
            else:
                return False
        else:
            stack.append(c)
        print(stack)
    return not stack        

input = "([}}])"
print(solutions(input))