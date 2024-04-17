# 과제 한 사람 리스트, 안 한 사람 리스트 생성
done_list = []
none_list = []
# 한 사람 입력받고 리스트에 추가
for student_done in range(28):
    student_done = int(input())
    done_list.append(student_done)
# 1번부터 30번까지 for문으로 돌려서 있으면 pass 없으면 안 한 사람 리스트에 추가
for i in range(1, 31):
    if i in done_list:
        pass
    else:
        none_list.append(i)
# 안 한 사람 리스트에서 최솟값, 최댓값 차례로 출력
print(min(none_list))
print(max(none_list))
