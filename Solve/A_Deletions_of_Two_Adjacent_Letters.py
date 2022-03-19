t = int(input())

for i in range(t):
    cindex = []
    lside = 0
    rside = 0
    b = False
    s = input()
    c = input()
    if(len(s) <= 1 and s == c):
        print("YES")
        continue

    for a in range(len(s)):
        if s[a] == c:
            cindex.append(a+1)

    for u in cindex:
        lside = u - 1
        rside = len(s) - u
        if(lside % 2 == 0 and lside != 0):
            b = True
            break
        elif rside % 2 == 0 and rside != 0:
            b = True
            break
    if(b):
        print("YES")
    else:
        print("NO")
