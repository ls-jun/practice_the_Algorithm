def solution(nums):
    answer = 0
    temp = []
    for i in range(0,len(nums)):
        if len(nums) == i+2: break
        for j in range(i+1,len(nums)):
            for k in range(j+1,len(nums)):
                temp.append(nums[i]+nums[j]+nums[k])
                
    for j in temp: 
        check = 0 
        for i in range(2,int(j**0.5)+1):
            if j % i == 0:
                check =1
                break
        if check ==0 :
            answer+=1

    return answer