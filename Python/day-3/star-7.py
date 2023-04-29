# *
# **
# ***
# ****
# ***
# **
# *

#n=7

n = int(input('Enter any number: '))

for i in range(1,n+1):
    if(i < (n/2 + 1)):
        print('*' * i)
    else:
        print('*' * (n-i+1))