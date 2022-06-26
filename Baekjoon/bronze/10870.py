n = int(input())

nums = []
nums.append(0)
nums.append(1)
for i in range(2,n+1):
    tmp = nums[i-1]+nums[i-2]
    nums.append(tmp)
print(nums[n])