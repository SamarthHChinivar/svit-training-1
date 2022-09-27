a = 10
x = a
print(id(a) , end=" , ")
print(id(x))
# same memory location as referred to same variable

a = 15
x = 20
print(id(a), id(x), sep=' , ')
# different memory location as values and locations differ