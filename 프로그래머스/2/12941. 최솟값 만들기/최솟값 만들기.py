def solution(A,B):
    A.sort(reverse=True)
    B.sort()
    sum = 0
    while(len(A)!=0):
        temp = A[0] * B[0]
        sum += temp
        A.pop(0)
        B.pop(0)
    return sum