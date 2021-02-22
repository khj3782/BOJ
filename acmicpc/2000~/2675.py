testNum = int(input())
for i in range(testNum):
    inputString = input()
    iterNum = int(inputString[0])
    iterString = inputString[2:]
    resString = ""
    for j in range(len(iterString)):
        resString += iterString[j]*iterNum
    print(resString)