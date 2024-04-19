T = int(input())
lst = []

for i in range(T):
    data = ""
    R, S = input().split()
    for x in S:
        data += x * int(R)
    lst.append(data)

for n in lst:
    print(n)