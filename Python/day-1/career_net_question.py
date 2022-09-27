str = input('Enter string:')

def check(str):
    var = False

    for i,ch in enumerate(str):
        if(ch != '0'):
            k = i
            break
    
    for i in range(k,len(str)):
        if(str[i] == '0'):
            var = True

    return var

if(check(str)):
    print('converts')
else:
    print('doesnt convert')