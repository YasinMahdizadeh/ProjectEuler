import math
def is_prime(n):
    root = n**0.5
    for i in range(2,int(root+1)):
        if( n % i == 0 ):
            return False
    return True

sta = True
c = 4
n = 10

while sta:
    if is_prime(n):
        print(str(n) + "is prime" + str(is_prime(n)) + "c=" + str(c) )
        c+=1
    n+=1
    if c == 10001 :
        sta = False
        print (n)
    