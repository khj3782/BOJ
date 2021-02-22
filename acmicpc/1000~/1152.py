import re
string = input()
myList = re.findall('[a-zA-Z]+', string)
print(len(myList))