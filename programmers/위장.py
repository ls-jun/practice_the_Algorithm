def solution(clothes):
    answer = 1
    dict = {}
    for i in clothes:
        if i[1] in dict:
            dict[i[1]]+=1
        else:
            dict[i[1]] = 2
    for i in dict:
        answer *= dict[i]

    return answer-1