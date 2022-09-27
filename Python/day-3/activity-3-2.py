#Check if key is present, if present then increment value of that key to 1 else increment by 2
key = "hi"
d = {}
if(key not in d):
    d[key] = 1
    #d[key] = value
else:
    d[key] = d[key] + 2
print(d) 

#Check whether a given value is string or not
a = 123
if(type(a) is str): 
    print("String")
else: 
    print("Not a String")

#Second last digit is odd or even
s = 1234
a = str(s) 
#an int can't be traversed, so we convert it to string, then convert
print("even" if(int(a[-2])) else "odd") 
#a is converted back to int, when checking the condition

#create a dict. of word and ascii value of first character pair,
#if the word is of even length else create dict. with word and it's length pair
a = "hello"
d = {}
if(len(a)%2 == 0):
    d[a] = ord(a[0]) #d[key] = value
else:
    d[a] = len(a)
print(d)