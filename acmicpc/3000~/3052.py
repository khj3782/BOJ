myList=[]
for i in range(10):
    n = int(input()) % 42
    if n not in myList:
        myList.append(n)
print(len(myList))