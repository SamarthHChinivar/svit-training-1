#Refer this link:
#https://www.google.com/amp/s/www.geeksforgeeks.org/minimum-initial-energy-required-to-cross-street/amp

def funcEnergy(energy, rate, time):
    return energy * time - rate - 1
    
r = funcEnergy(4,3,5)
print (r)