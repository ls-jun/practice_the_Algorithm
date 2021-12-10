a, b = input().split()
c=""
d=""
for i in range(len(a)-1,-1,-1):
        c+=a[i]
        d+=b[i]
if int(c) > int(d):
    print(c)
else:
    print(d)