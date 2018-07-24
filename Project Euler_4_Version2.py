largest = 0

def IsPalindrome( s ):
    reversed = s[::-1]
    if ( reversed == s ):
        return True
    return False

for a in range( 999 , 900 , -1 ):
    for b in range( 999 , 900 , -1 ):
        print ( a * b , IsPalindrome(str(a*b)))
        if(IsPalindrome(str(a*b))):
            if( a*b > largest):
                largest = a*b
print(largest)
