sec_3 = ['A','B','C']
sec_4 = ['D','E','F']
sec_5 = ['G','H','I']
sec_6 = ['J','K','L']
sec_7 = ['M','N','O']
sec_8 = ['P','Q','R','S']
sec_9 = ['T','U','V']
sec_10 = ['W','X','Y','Z']

sec = 0
word = list(input())
for i in word:
    if i in sec_3:
        sec += 3
    elif i in sec_4:
        sec += 4
    elif i in sec_5:
        sec += 5
    elif i in sec_6:
        sec += 6
    elif i in sec_7:
        sec += 7
    elif i in sec_8:
        sec += 8
    elif i in sec_9:
        sec += 9
    else:
        sec += 10
print(sec)