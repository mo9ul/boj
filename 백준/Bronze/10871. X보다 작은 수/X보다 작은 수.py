N, X = map(int, input().split())
A = list(map(int, input().split()))
lst = []
for i in A:
    if i < X:
        lst.append(i)
print(*lst)