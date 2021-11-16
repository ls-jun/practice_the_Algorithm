a = int(input())
for _ in range(a):
    answer = 0
    q = input()
    tmp = 0
    for i in q:
        if (i == "O"):
            tmp+=1
            answer+=tmp
        elif(i == "X"):
            tmp=0
    print(answer)