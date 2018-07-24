def IsEven(n):
    if ( n % 2 == 0 ):
        return True
    else:
        return False


a = 1
b = 1
fibonacci = 2
counter = 0
sum = 0
while(fibonacci < 4000000):
    if ( counter % 2 == 0):
        a = a + b
        fibonacci = a
        counter=counter+1
    else:
        b = a + b
        fibonacci = b
        counter=counter+1
    if IsEven(fibonacci):
        sum += fibonacci
print(sum)
