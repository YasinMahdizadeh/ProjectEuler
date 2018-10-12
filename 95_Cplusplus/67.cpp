#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
ifstream fin("p067_triangle.txt");
ofstream fout("skidesign.out");
int triangle[100][100];
int maxx [100][100] = {0};
 
int main ()
{
	for ( int i = 0 ; i < 100 ; i++ )
	{
		for ( int j = 0 ; j <= i ; j++ )
			fin >> triangle[i][j];
	}
	cout << triangle[0][0] << triangle[5][2] ;
	
	int maxxx = 0;
	maxx[0][0] = 59;
	for( int i = 1 ; i < 100 ; i++ )
	{
		for ( int j = 0 ; j <= i+1 ; j++ )
		{
			maxx[i][j] = triangle[i][j] + max(maxx[i-1][j],maxx[i-1][j-1]) ;//max ( max(maxx[i-1][j],maxx[i-1][j+1]) , max(maxx[i-1][j],maxx[i-1][j-1]) );//,maxx[i-1][j+1]);
		}
	}
	//cout << maxx[2][2];
	
	for( int i = 0 ; i < 100 ; i++ )
	{
		for ( int j = 0 ; j < 100 ; j++ )
		{
			if ( maxx[i][j] > maxxx )
				maxxx = maxx[i][j];
			//cout << maxx[i][j] << " " ;
		}
		//cout << "\n";
	}
	cout << maxxx;
}


/*
 
*/
	
