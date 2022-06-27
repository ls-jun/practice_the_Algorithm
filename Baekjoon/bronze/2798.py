n, m = map(int, input().split())
cards = []
tmp = input().split()
for i in tmp:
    cards.append(int(i))
answer=0
for i in range(n):
    for j in range(i+1,n):
        for k in range(j+1, n):
            tmp = cards[i]+cards[j]+cards[k]
            if (m-tmp) >=0 and answer<tmp:
                answer=tmp

print(answer)