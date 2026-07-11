def solution(s):
    stack = []
    for ch in s:
        if ch == '(':
            stack.append(ch)
        elif ch == ')':
            if len(stack) == 0:
                return False
            stack.pop()
    if len(stack) > 0:
        return False

    return True