#include <iostream>
#include <iomanip>
using namespace std;

int counter = 1;  ////168 numbers
int prime = 0;
int p[168] = {2};  
int x = 0;
int i = 1000;
int j = 0;
int io = 0;
int sum = 0;
int sum2 = 0;

int main()
{
	///////////// Array of 1 to 1000 prime numbers /////////////// 
	for(int q = 3 ; q <= 1000 ; q++ )
	{
		for(int n = 2 ; n <= i - 1 ; n++ )
		{
			if( q % n == 0)
			{
				break;
			}
			
			if( n == q - 1 )
			{
				counter++;
				p[counter - 1] = q;
				sum = sum + q;
			}	
		}
	}
	

	///////////// End Array
		
	while(prime < 2000000 )
	{
		io = 0;
		for(int j = 0 ; j < 168 ; j++ )
		{
			if(i % p[j] == 0)
			{
				break;
			}
			
			if( j == 167 )
			{
				io = 1;
			}
		
			
		}
		
		if( io == 1 )
		{
		
		for(int n = 2 ; n <= i - 1 ; n++ )
		{	
			
			
			if( i % n == 0)
			{
				break;
			}
			
			if( n == i - 1 )
			{
				counter++;
				cout << counter << setw(10) << i << "\n";
				prime = i;
				sum = sum + i;
				
			}
			
			
		}
		}
		if(sum > 2000000000)
		{ 
			sum2++;
			sum = 0;
		}
		i++;
	}

cout << "/n/n/t" << sum2 << " " << sum ;
}
