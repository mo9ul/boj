rating = ['A+', 'A0', 'B+', 'B0', 'C+', 'C0', 'D+', 'D0', 'F']
grade = [4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0]

sum_grade_x_point = 0
sum_totalpoints = 0

for i in range(20):
    subject, point, G = input().split()
    point = float(point)
    if G != 'P':
        sum_grade_x_point += point * grade[rating.index(G)]
        sum_totalpoints += point
print(round((sum_grade_x_point / sum_totalpoints),6))