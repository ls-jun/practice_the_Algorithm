from collections import Counter

n = int(input())
nums = input().split()
m = int(input())
mums = input().split() 
c = Counter(nums)

for i in mums:
    if c[i]:
        print('1')
    else:
        print('0')