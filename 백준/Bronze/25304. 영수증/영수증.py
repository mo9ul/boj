# 영수증에 적힌 총 금액 X
X = input()
# 구매한 물건의 종류의 수 N
N = input()
# N개의 줄에 각 물건의 가격 a, 개수 b
total = 0
for i in range(int(N)):
    a, b = input().split()
    total += int(a)*int(b)
if total == int(X):
    print("Yes")
else:
    print("No")