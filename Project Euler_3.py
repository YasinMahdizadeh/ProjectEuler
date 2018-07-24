number = 600851475143
second_root = ( 600851475143 ** 0.50 )
largest_prime_factor = 0

for i in range( 2 , int(second_root) + 1 ) :
    reminder = number % i
    if ( reminder == 0 ):
        if ( i > largest_prime_factor):
                largest_prime_factor = i
print ( largest_prime_factor )
