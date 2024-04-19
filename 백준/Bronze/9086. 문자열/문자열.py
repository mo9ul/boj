T = int(input())
lst = []
for i in range(T):
    i = input()
    lst.append(i[0] + i[-1])

for r in lst:
    print(r)