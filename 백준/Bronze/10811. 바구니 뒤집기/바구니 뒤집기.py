# N,M 입력받기
N, M = map(int, input().split())
# 바구니 리스트 생성
basket_list = []
for z in range(1, N + 1):
    basket_list.append(z)
# i,j 입력받기 & 역순으로 바꿔주기
for x in range(M):
    i, j = map(int, input().split())
    basket_list[i - 1 : j] = reversed(basket_list[i - 1 : j])
print(*basket_list)
