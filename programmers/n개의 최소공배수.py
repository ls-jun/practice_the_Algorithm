import math

def lcm(x,y):
    return (x*y)//math.gcd(x,y)

def solution(arr):
    answer = 1
    for i in arr:
        answer = lcm(i,answer)
    return answer