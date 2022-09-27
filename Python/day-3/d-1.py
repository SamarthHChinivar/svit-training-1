#Reverse the values present in dictionary
#keys of dict. are unique and immutable
d = {'a':'hello', 'b':100, 'c':10.1, 'd':'world'}

for i in d:
    if(type(d[i]) is str):
        d[i] = (d[i])[::-1]
print(d)

#number of occuurences in a str uding key
s = "hello world"
d = {}
for i in s:
    if(i in d):
        d[i] += 1
    else:
        d[i] = 1

print(d) 