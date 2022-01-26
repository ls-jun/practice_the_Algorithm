def solution(s):
    answer = 0
    nomal = "[{("
    unomal = "}])"
    dict = {"[":"]", "{":"}", "(":")","t":"temp"}
    j=0
    l = len(s)
    
    lenS = len(s)
    while(lenS):
        s = s[1:l] + s[0]
        stack = []
        stack.append("t")
        for i in s:
            if i in nomal:
                stack.append(i)
                j+=1

            elif i in unomal:
                if i == dict[stack[-1]]:
                    stack.pop()
                    j+=1
                elif dict[stack[-1]] == "temp":
                    answer-=1
                    break
        if len(stack) == 1:
            answer+=1
        
        lenS-=1

    return answer