t = int(input())

for i in range(t):
    n = int(input())
    s = input()
    firstHalf = ''
    secondHalf = ''

    for j in range(n/2):
        firstHalf += s[j]
    
    for j in range(n/2+1, n):
        secondHalf += s[j]
    
    secondHalf = secondHalf[::-1]
    