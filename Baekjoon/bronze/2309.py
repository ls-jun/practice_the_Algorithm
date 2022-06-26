nums =[]
answer = 0
for i in range(9):
    nums.append(int(input()))
    answer+=nums[i]

for i in range(9):
    for j in range(i+1,9):
        tmp = answer-nums[i]-nums[j]
        if tmp == 100:
            result = (nums[i], nums[j])

nums.sort()
for i in nums:
    if i not in result:
        print(i)


