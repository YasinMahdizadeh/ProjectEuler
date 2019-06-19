largest = 0

def IsPalindrome( s ):
    for i in range( 0 , len(s) ):
        if ( s[i] != s[len(s)-i-1] ):
            return False
    return True



for a in range( 999 , 900 , -1 ):
    for b in range( 999 , 900 , -1 ):
        print ( a * b , IsPalindrome(str(a*b)))
        if(IsPalindrome(str(a*b))):
            if( a*b > largest):
                largest = a*b
print(largest)
