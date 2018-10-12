#include <iostream>

//1414

using namespace std;

bool number [2000001];

long long sum = 0;

bool Prime ( int fin )
{
	int counter = 0;
	for ( int i = 1 ; i < fin ; i++ )
	{
		if ( fin % i == 0 )
		{
			counter++;
		}
	}
	
	if( counter == 1 )
		return true;
	else
		return false;
}

int main()

{
	//cout << Prime ( 18 ) << "\n" ;
	for( int m = 0 ; m <= 2000000 ; m++ )
		number[m] = true;

	for ( int m = 2 ; m <= 1414 ; m++ )
	{
		if( Prime(m) == true )
		{
			//number[m] = true; 
			int k = 2;
			while ( m * k <= 2000000 )
			{
				number [ m * k ] = false ;
				k++;
			}
		}
	}
	
	for( int m = 2 ; m <= 2000000 ; m++ )
	{
		if( number[m] == true )
			{cout << m << " " ;sum = sum + m ;}
	}
	
	cout << "\n\n" << sum;
}

