N = int(input())
num = input()
num_slice = list(num[::1])
Sum = 0
for i in num_slice:
    Sum += int(i)
print(Sum)
