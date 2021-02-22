string = input().upper()
dic = {}
maxint = [0]
maxchar = [""]
for i in string:
    if i in dic:
        dic[i] += 1
    else:
        dic[i] = 1
        
for i in dic:
    if dic[i] > max(maxint):
        maxint = [dic[i]]
        maxchar = [i]
    elif dic[i] == max(maxint):
        maxint.append(dic[i])
        maxchar.append(i)

if len(maxint) > 1:
    print("?")
else:
    print(maxchar[0])