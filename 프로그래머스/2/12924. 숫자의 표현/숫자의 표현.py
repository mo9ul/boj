def solution(num):
    answer = 0
    for i in range(1, num+1):
        sum = 0
        while sum < num:
            sum += i
            i += 1
        if sum == num:
            answer += 1
    return answer
            