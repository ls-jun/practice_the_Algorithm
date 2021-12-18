def pell(a):
    l = len(a)
    for i in range(l//2):
        if a[i] != a[l-i-1]:
            return "no"
    
    return "yes"

    
while(True):
    i = input()
    if i == "0":
        break
    print(pell(i))