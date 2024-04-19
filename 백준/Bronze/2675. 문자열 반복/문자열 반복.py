T = int(input())

for i in range(T):
    R, S = input().split()
    for x in S:
        print(x * int(R), end="")
    print()