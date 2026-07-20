def solution(s):
    zeros = 0 #얘는 새 이진변환시 초기화되지않고 고정. 정답으로 제출해야됨.
    count = 0 #얘는 새 이진변환시 초기화되지않고 카운트가 올라야함. 정답으로 제출해야됨.
    
    while s != "1":
        zeros += s.count("0")
        s = bin(s.count("1"))[2:]
        count += 1
        
    return [count,zeros]