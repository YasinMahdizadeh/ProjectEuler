#include <iostream>
#include <cmath>
using namespace std;
int div = 0;
int i = 0;
int n ;
int main()
{
	while(div < 501)
	{
		div = 0;
		i++;
		n = i * (i+1) / 2 ;
		for( int x = 1 ; x <= pow(n,0.5) ; x++ )
		{
			if( n % x == 0 )
			{
				div++;
			}
		}
		div = div * 2;
		
		
	}
	
	cout << n ;
	
}
