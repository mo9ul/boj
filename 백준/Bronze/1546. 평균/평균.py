N = int(input())
score = list(map(int, input().split()))
Sum = sum(score)
new_avg = (Sum / max(score) * 100) / N
print(new_avg)