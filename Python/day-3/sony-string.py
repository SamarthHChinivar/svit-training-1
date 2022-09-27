#Add the numbers of this string:
s = "Sony12India567Pvt2ltd"
sum = 0
for i in s:
    if(ord(i) in range(48,58)):
        sum += int(i)
print(sum)