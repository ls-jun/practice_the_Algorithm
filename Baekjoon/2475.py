a = input()
answer=0
for i in a.split():
    answer+= (int(i)%10)**2
print(answer%10)