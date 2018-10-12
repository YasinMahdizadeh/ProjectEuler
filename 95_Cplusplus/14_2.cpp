#include <iostream>
using namespace std;

int c[1000001] = {0} ;
long long  maxx = 0;

long long chain ( long long i )
{
	cout << i << "\n";
	if ( i == 1 || i == 0 )
	{
		return 0;
	}
	if( i % 2 == 0 )
	{
		if( c [ i / 2 ] != 0 && i <= 1000000 )//&& i / 2 != 1  ) 
			return c[ i / 2] + 1;
		else
			return  chain( i / 2 ) + 1;
		//c[i] = c[ i / 2 ] + 1;
	}
	if( i % 2 == 1 )
	{
		//if(
		if( c [ ( i * 3 ) + 1 ] != 0 && i <= 1000000 && ( i * 3 ) + 1 <=1000000)
		{
			return c [ ( i * 3 ) + 1 ] + 1;
		}
		else
			return  chain( ( i * 3 ) + 1 ) + 1;	
		//c[i] = c[ i * 3 ] + 1;
	}
}
int main()
{
	/*
	c[1] = 1 ; c[0] = 1 ;
	
	for ( int i = 1 ; i <= 100000 ; i++ )
	{
		c[i] = chain ( i );
		cout << i << " " << c[i] << "\n" ;
		if ( c[i] > maxx )
			maxx = c[i] ;
		
	}
	
	cout << maxx ;*/
	cout << chain(425645);
}
//425645
