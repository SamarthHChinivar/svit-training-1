#even or odd
n = eval(input("Enter a number:"))
print("even" if(n%2==0) else "odd")

#greatest of 3 numbers 
a,b,c = 10,13,9
if(a>=b):
    print("a is greatest" if(a>=c) else "c is greatest")
else:
    print("b is greatest" if(b>=c) else "c is greatest")

#changing case of char
ch = input("Enter any charecter:")
if(ord(ch) in range(65,91)): #alternative method (if inbuilt methods allowed) = if(ch.isupper()):
    print("It was a uppercase character and it's lowercase is: ", chr(ord(ch)+32))
elif(ord(ch) in range(97,123)): 
    print("It was a lowercase character and it's uppercase is: ", chr(ord(ch)-32))
else:
    print("not a character")

#vowel or not
ch1 = input("Enter any character:")
if(ch1 in "aeiouAEIOU"):
    d = {ch1:ord(ch1)}
    print(d)
else:
    print("Not a vowel")