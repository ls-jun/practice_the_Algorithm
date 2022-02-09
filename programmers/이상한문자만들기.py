def solution(s):
    answer = ''
    ch =0
    for i in s:
        if i == " ":
            temp= " "
            ch =0
        else:
            if ch % 2 == 0:
                temp = i.upper()
            else:
                temp = i.lower()
            ch+=1
        answer+=temp
    return answer