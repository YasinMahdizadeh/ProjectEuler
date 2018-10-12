#include <iostream>
#include <math.h>
using namespace std;

int main() {

	//775146

//cout << 600851475143 % 3 << "\n\n\n";	
	//600851475143
	//long n = sqrt(600851475143) ;
//	unsigned int n = 600851475143 / 2;

	

for ( int i = 1 ; i < 775146 + 1 ; i = i + 1)
{
	
	//if( 
	
	if( 600851475143 % i == 0 )
	{
		
		for ( int b = 2 ; b <  i  ; b = b + 1)
		{
			if( i % b == 0 )
			{
				//d = d + 1;
				break;	
			}
				
			if(b == i - 1)
			{
				cout << "!!!!";
			}
		}
		

		cout << i << "\n";
		cout << 600851475143 / i << "\n";



		}

		

		
	
	
}

}
