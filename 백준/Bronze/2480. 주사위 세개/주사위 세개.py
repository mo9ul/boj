a,b,c = input().split()

if a == b == c:
    print(10000 + int(a) * 1000)
elif a == b:
    print(1000 + int(a) * 100)
elif a == c:
    print(1000 + int(a) * 100)
elif b == c:
    print(1000 + int(b) * 100)
elif int(a) > int(b) > int(c):
    print(int(a)*100)
elif int(a) > int(c) > int(b):
    print(int(a)*100)
elif int(b) > int(a) > int(c):
    print(int(b)*100)
elif int(b) > int(c) > int(a):
    print(int(b)*100)
elif int(c) > int(a) > int(b):
    print(int(c)*100)
else:
    print(int(c)*100)