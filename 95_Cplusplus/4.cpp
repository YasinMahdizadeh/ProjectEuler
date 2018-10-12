#include <iostream>
#include <cstdio>

using namespace std;

int minn = 0;


 bool Pal ( int a )
{
		int c = 0;
		char buffer [8];
		sprintf( buffer , "%d" , a );

		
		for ( int j = 0 ; j < 3 ; j++ )
		{
			if( buffer[j] == buffer[ 5 - j ])
			{
				c++;
			}		
		}
		
		if( c == 3 )
		return true;
		else
		return false;
		

}

int main()
{

int a ;

	for ( int i = 999 ; i >= 900 ; i-- )
	{

		
		for ( int j = i ; j >= 900 ; j-- )
		{			
			a = i * j ;
			
			if ( Pal ( a ) == true )
			{
				cout << "!" ;
				if( a > minn )
					minn = a ;
			}	
			
			cout << i << " " << j << " " << a << "\n";

		}
		
	}
	
	cout << minn ;
}

