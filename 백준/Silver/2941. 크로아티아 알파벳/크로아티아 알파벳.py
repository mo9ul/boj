word = input()
cro_alphabet = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

cro_list = []

for cro in cro_alphabet:
    if cro in word:
        count = word.count(cro)
        if count > 1:
            for i in range(count):
                cro_list.append(cro)
            word = word.replace(cro,",")
        else:
            cro_list.append(cro)
            word = word.replace(cro,",")
wordList = word.replace(",","")

print(len(cro_list)+len(wordList))