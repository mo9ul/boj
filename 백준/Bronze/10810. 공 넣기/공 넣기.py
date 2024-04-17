lst = []
N, M = map(int, input().split())

for r in range(N):
    lst.append(0)

for x in range(M):
    i, j, k = map(int, input().split())
    while True:
        lst[i - 1] = k
        i += 1
        if i == j + 1:
            break
print(*lst)
