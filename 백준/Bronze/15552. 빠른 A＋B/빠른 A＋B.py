import sys

# 테스트 케이스 T
T = int(input())

for i in range(T):
    A, B = map(int, sys.stdin.readline().split())
    print(A + B)
