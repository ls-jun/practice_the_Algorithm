def solution(sizes):
    answer = 0
    h = 0 
    w = 0
    for i in sizes:
        i.sort()
        h = max(h,i[1])
        w = max(w,i[0])
    answer = h * w
    return answer