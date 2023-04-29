sen = input('Enter any sentence: ')
count = 0

for i in sen:
    if(i == ' '):
        count += 1

words = count + 1
print('Number of words are: ', words)