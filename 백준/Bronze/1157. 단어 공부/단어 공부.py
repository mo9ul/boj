word = input().upper()
word_set = list(set(word))

word_count = []
for i in word_set:
    num = word.count(i)
    word_count.append(num)

if word_count.count(max(word_count)) > 1:
    print("?")
else:
    print(word_set[word_count.index(max(word_count))])