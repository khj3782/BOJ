numTest = int(input())
for i in range(numTest):
    ox = input()
    total = 0
    mid = 0
    for i in range(len(ox)):
        if(ox[i] == "O"):
            mid += 1
            total += mid
        else : mid = 0
    print(total)