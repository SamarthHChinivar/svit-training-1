#Printing Even or Odd numbers
n = eval(input("Enter any number: "))

print("even numbers: ")
for i in range(2,n+1,2):
    print(i)

print("odd numbers: ")
for i in range(1,n+1,2):
    print(i)

#Prime numbers from 1 to 30
def isprime(n):
    for i in range(2,int(n/2)):
        if(n%i == 0):
            return False
    return True

print("Prime numbers from 1 to 30: ")

#Factorials of a number and append it to a list 
n = eval(input("Enter any number: "))

prod = 1
list = []
for i in range(1,n+1):
    prod *= i
    list.append(prod)
print("Factorials of ",n," are ",list)