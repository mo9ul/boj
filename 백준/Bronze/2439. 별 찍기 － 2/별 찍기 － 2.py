num = input()
for i in range(int(num)):
    print(" " * (int(num) - (i + 1)) + ("*" * (i + 1)))
