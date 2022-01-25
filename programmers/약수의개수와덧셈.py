def solution(left, right):
    answer = 0
    for i in range(left,right+1):
        if i == (int(i**(1/2)))**2:
            answer -= i
        else:
            answer += i
    return answer