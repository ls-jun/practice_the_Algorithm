from collections import Counter

n = int(input())
nums = input().split()
m = int(input())
mums = input().split() 
c = Counter(nums)

result =[]
for i in mums:
    result.append(c[i])

for i in result:
    print(str(i)+" ", end="")