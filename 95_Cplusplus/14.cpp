#include <iostream>
using namespace std;
int a;
int b = 1;
int large = 0;;
int main()
{
	
	for( int i = 1 ; i < 1000000 ; i++ )
	{
		b = 1;
		a = i;
		while(a != 1)
		{
			if(a % 2 == 0 )
			{
				a = a / 2 ;
			}
		
			else //(a % 2 == 1 )
			{
				a = ( 3 * a ) + 1 ; 
			}
		
			//cout << a << "\n" ;
		
			b++;
		
		}
		
		cout << i << "\t" << b << "\n";
		
		if( b > large )
		{
			large = i;
		}
				
	}
	
	cout << "\t\t" << large ;

}
