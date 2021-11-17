a = input()
alpha = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
answer = [-1 for i in range(len(alpha))]
for i in range(len(a)):
    if(answer[alpha.index(a[i])]<0):
        answer[alpha.index(a[i])] = i
for i in answer:
    print(i,"", end="");

