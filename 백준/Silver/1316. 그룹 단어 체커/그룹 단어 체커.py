N = int(input())
count = N

for word in range(N):
    word = input()
    for j in range(0, len(word)-1):
        if word[j] == word[j+1]:
            pass
        else:
            if word[j+1] in word[0:j+1]:
                count -= 1
                break
print(count)