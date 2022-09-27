# #0 to 4
i = 0
while(i<5): 
    print(i)
    i+=1

#iterating list using while
l = ["hi","hello",1,2]
i=0
while(i<len(l)):
    print(l[i],i,sep=' , ')
    i += 1

# #iterating string using while
a = "hello world"
i=0
while(i in range(len(a))):
    print(a[i], end=" ")
    i += 1
print("")

#counting the sequences in a string using dictionary
a = "abracadabra"
d = {}
i = 0
while(i<len(a)):
    if(a[i] in d):
        d[a[i]] += 1
    else:
        d[a[i]] = 1
    i+=1
print(d)

#iterating a string in reverse direction
a = "hello world"
i = len(a)-1
while(i>=0):
    print(a[i],end=' ')
    i-=1