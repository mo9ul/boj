# 알파벳을 리스트로 만든다
alphabet = list("abcdefghijklmnopqrstuvwxyz")

S = list(input())
for i in alphabet:
    if i in S:
        index = S.index(i)
        print(index, end=" ")
    else:
        print(-1, end=" ")