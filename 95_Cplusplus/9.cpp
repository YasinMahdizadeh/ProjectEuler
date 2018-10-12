#include <iostream>
#include <cmath>
using namespace std;
int a,b,c = 0;
int io = 0 ;

int main()
{
	for(int i = 1000 ;  i > 0 ; i--)
	{
		a = i;
		//cout << a << "\n" ;
		for(int n = 1000 - i ; n >= 0 ; n--)
		{
			b = n;
			c = 1000 - i - n;
			
			if( pow(a,2) == pow(b,2) + pow(c,2) )
			{
				cout<< "!!!\t" << a << "\t" << b << "\t" << c << "\n";
				io = 1;
			} 
		}
		if(io == 1)
		{
			//break;
		}
		
	}
}
