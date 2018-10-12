def Sum( n ):
    if ( n == 0 ):
        return 0
    if ( n == 1 ):
        return 1
    return Sum( n-2 ) + 4*n*n - 6*n + 6

print ( Sum (1001) ) 
