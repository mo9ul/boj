lst = []
for i in range(9):
    i = int(input())
    lst.append(i)
print(max(lst))
print(int(lst.index(max(lst))) + 1)