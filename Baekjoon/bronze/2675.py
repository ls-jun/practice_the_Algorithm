t = int(input())
for _ in range(t):
    a = input()
    b = int(a.split()[0])
    a = a.split()[1]
    for i in a:
        print(i*b,end='')
    print()