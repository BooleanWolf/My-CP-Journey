n, k = [int(x) for x in input().split()]
patils = {}
ans = []

for i in range(k):
    l, m = [int(x) for x in input().split()]
    patils[i] = [l, m]

patils = dict(
    sorted(patils.items(), key=lambda sub: abs(sub[1][0] - sub[1][1])))

i = 0
j = 0
while n:
    ans.append(patils[i][j]) 

print(patils)
