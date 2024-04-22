pieces = input().split()
right = [1,1,2,2,2,8]
adjust_list = []

for i in range(6):
    adjust = int(right[i])-int(pieces[i])
    adjust_list.append(adjust)

print(*adjust_list)