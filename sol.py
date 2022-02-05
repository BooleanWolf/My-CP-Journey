lst1 = [int(item) for item in input().split()]

l = []

for i in lst1:
    if i not in l:
        l.append(i)

print(4-len(l))
