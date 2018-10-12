#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("11.in");
int grid[20][20];
int maxx = 0;

int main() 
{
	for ( int i = 0 ; i < 20 ; i++ )
	{	
		for( int j = 0 ; j < 20 ; j++ )
		{
			fin >> grid[i][j];
		}
	}
	
	//cout << grid[0][10] << " " << grid[5][6];
	
	for ( int i = 0 ; i < 16 ; i++ )
	{
		for( int j = 0 ; j < 20 ; j++ )
		{
			if ( grid[i][j] * grid[i+1][j] * grid[i+2][j] * grid[i+3][j] > maxx )
				maxx = grid[i][j] * grid[i+1][j] * grid[i+2][j] * grid[i+3][j]; 
		}
	}
	
	for ( int i = 0 ; i < 16 ; i++ )
	{
		for( int j = 0 ; j < 16 ; j++ )
		{
			if ( grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3] > maxx )
				maxx = grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3]; 
		}
	}
	
	for ( int i = 3 ; i < 20 ; i++ )
	{
		for( int j = 3 ; j < 20 ; j++ )
		{
			if ( grid[i][j] * grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3] > maxx )
				maxx = grid[i][j] * grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3]; 
		}
	}
	
	cout << maxx;
	
	

}
