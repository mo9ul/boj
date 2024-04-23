N = int(input())

for i in range(1,N+1):
    print((" "*(N-i))+"*"*(i*2-1))

lst = []
for r in range(1,N):
    re = (" "*(N-r))+"*"*(r*2-1)
    lst.append(re)

reverse_lst = lst[::-1]
for x in reverse_lst:
    print(x)