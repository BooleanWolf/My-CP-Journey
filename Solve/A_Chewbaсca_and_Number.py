n = input()
b = ''
c = 1
for i in n:
    if c == 1 and 9 - int(i) == 0:
        b += '9'
        c = c + 1
        continue
    d = int(i)
    a = min(9-d, d)
    a = str(a)
    b += a
    c += 1

print(b)
