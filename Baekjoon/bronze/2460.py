
tmp = 0
answer=0
for _ in range(10):
    a, b = map(int, input().split())
    answer-=a
    answer+=b
    tmp = max(tmp, answer)

print(tmp)

