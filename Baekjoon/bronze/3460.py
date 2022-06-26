t = int(input())
for _ in range(t):
    n = int(input())
    tmp=[]

    while(n>1):
        b=n%2
        n//=2
        tmp.append(b)
    tmp.append(n)

    for i in range(len(tmp)):
        if tmp[i]:
            print(str(i)+" ", end="")


