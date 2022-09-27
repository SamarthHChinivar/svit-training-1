#replace more than once occuring character, with * in a string
a = "hello"
b = ""

for i in a:
    if(a.count(i)>1):
        b += "*"
    else:
        b+=i
print(b)