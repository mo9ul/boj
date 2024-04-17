N, M = map(int, input().split())
lst = []
for r in range(1, N + 1):
    lst.append(r)
for x in range(M):
    i, j = map(int, input().split())
    # 리스트 값 교환
    lst[i - 1], lst[j - 1] = lst[j - 1], lst[i - 1]
print(*lst)
