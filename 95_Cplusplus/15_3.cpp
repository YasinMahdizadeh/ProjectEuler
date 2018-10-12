#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("15.out");

long long c[50][50] = {0};

long long combo ( int n , int k )
{
	if( k == 0 || k == n )
		return 1 ;
	else if( k == 1 || k == n-1 )
		return n ;
	else
		return c[n-1][k-1] + c[n-1][k];
}
int main()
{
	for ( int i = 1 ; i <= 50 ; i++ )
	{
		for ( int j = 1 ; j <= 50 ; j++ )
			c[i][j] = combo ( i , j ) ;
	}
	
	for ( int i = 0 ; i <= 50 ; i++ )
	{
		for ( int j = 0 ; j <= 50 ; j++ )
			cout << c[i][j] << " " ;
		cout << "\n";
	}
	
	cout << "\n\n" << c[40][20];
}
/////////////////////////////137846528820
