def solution(s):
    answer = ''
    temp = 1
    for i in range(len(s)):
        print(s[i])
        if s[i] == ' ':
            temp=1
        elif temp==1:
            answer += s[i].upper()
            temp = 0
            continue
        answer += s[i].lower()

    return answer