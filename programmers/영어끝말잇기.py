def solution(n, words):
    answer = []
    temp = []
    temp.append(words[0])
    
    for i in range(1,len(words)):
        if words[i] in temp or temp[i-1][-1]!=words[i][0] :
            print(temp, words[i], i,n)
            answer.append((i)%n+1)
            answer.append((i+1)//n+1 if (i+1)%n!=0 else (i+1)//n)
            break
        temp.append(words[i])
    if len(answer)==0:
        answer.append(0)
        answer.append(0)


    return answer