a = input()
b = input()

sum = int(a) + int(b)

a = a.replace('0', '')
b = b.replace('0', '')

sum2 = str(sum)
sum2 = sum2.replace('0', '')
sum2 = int(sum2)

actualSum2 = int(a) + int(b)

if(actualSum2 == sum2):
    print("YES")
else:
    print("NO")
