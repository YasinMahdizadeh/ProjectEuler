#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
ofstream fout("25.out");
int number[2][1000] = {0};
int sum[1000] = {0};
int x = 0;
int main()
{
	number[0][999] = 1; number[1][999] = 1;
	int overflow = 0;
	while ( sum[0] == 0 )
	//for ( int p = 0 ; p < 10 ; p++ )
	{
		x++;
		for ( int i = 999 ; i >= 0 ; i-- )
		{
			sum[i] = ( number[0][i] + number[1][i] + overflow) % 10 ;
			if ( number[0][i] + number[1][i] + overflow > 9 )
				overflow = 1;
			else
				overflow = 0;
				
			//x = i;
		}
			
		if ( x % 2 == 0 )
		{
			for ( int i = 0 ; i < 1000 ; i++ )
				number[0][i] = sum[i];
		}
		else
		{
			for ( int i = 0 ; i < 1000 ; i++ )
				number[1][i] = sum[i];
		}
		
		
	}
	
	for ( int i = 0 ; i < 1000 ; i++ )
		fout << sum[i];
		
	fout << "\n" << x;
}

