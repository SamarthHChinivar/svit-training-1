#range(start,stop,step)
#in == membership operator

#even numbers from 2 to 10
i = 0
for i in range(2,11,2):
    print(i)

#if first letter of item is vowel,print
list = ['apple','microsoft','insta']
for i in list:
    if(i[0] in "aeiouAEIOU"):
        print("vowels: ",i)

#if item has even length ,print
list = ['apple','microsoft','insta','lg']
for i in list:
    if(len(i)%2==0):
        print("even length: ",i)