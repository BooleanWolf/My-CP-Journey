n = 5

l = [i for i in range(1, n+1)]

for i in range(1, n+1):
    status = []
    print(f"Walk {i}:")
    for j in l:
        if j % i == 0:
            status.append("Toggled")
        else:
            status.append("Not Toggled")
    print(status)
