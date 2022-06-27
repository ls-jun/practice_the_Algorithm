n, m = map(int, input().split())
dict = {}
answer =[]
for _ in range(n):
    dict[input()]=1
for _ in range(m):
    tmp = input()
    if tmp not in dict:
        pass
    else:
        answer.append(tmp)
answer.sort()
print(len(answer))
for i in answer:
    print(i)
