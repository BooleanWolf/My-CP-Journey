# lst1 = [int(item) for item in input().split()]
i = int(input())
for j in range(i):
    s = int(input())
    if s > 65:
        print("Overload")
    elif s < 35:
        print("Underload")
    else:
        print("Normal")
