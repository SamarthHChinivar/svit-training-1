list = ["hi","hello",123,456]

#create a list if it is an integer reverse it else keep it as it is it
l1 = []
for i in list:
    if(type(i) is str):
       l1.append(i)
    elif(type(i) is int):
        rev = (str(i))[::-1]
        l1.append(int(rev))
         
print(l1)

#create a dictionary, for strings, reverse it for value and for int, pass it's length as value. 
d = {}
for i in list:
    if(type(i) is str):
        d[i] = i[::-1]
    elif(type(i) is int):
        d[i] = len(str(i))
print(d)

#print nubers in list
list = ['abc','hello','123','23']

for i in list:
    if(i.isdigit()):
        print(i,end=' ')
print()
# .isdigit() is in-built, wheras ord(range(48,58)) isn't in-built

#create a new list for words having even number of characters
list = ['apple','yahoo','google','gmail','walmart','flipkart']
l1 = []

print("Even Charecters present in a word are: ")
for i in list:
    if(len(i)%2==0):
        l1.append(i)
print(l1)

#Reverse the strings in a list
words = ['hi','hello','python']
rev_words = [] #strings are immutable

for i in words:
    rev_words.append(i[::-1])
print(rev_words)