while(True):
        i = input()
        a = int(i.split()[0])
        b = int(i.split()[1])
        if(a+b == 0):
            break
        print(a+b)