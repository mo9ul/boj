# 공리스트 만들고, for 문으로 10개 입력받아서 공리스트에 append
num_list = []
for i in range(10):
    i = int(input())
    num_list.append(i)
# for 문으로 나누고, 공리스트에 나머지 append
rest_list = []
for x in num_list:
    rest = x % 42
    rest_list.append(rest)
# 나머지 리스트에서 중복값 개수 세기 -> 집합으로 만들면 중복요소 자동제거
rest_set = set(rest_list)
print(len(rest_set))
