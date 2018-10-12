#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
ofstream fout("25.out");
int number[2][1000] = {0};
int sum = 1;
int x = 0;
int main()
{
	for ( int i = 3 ; i <= 1001 ; i += 2 )
	{	
		cout << ( i * i ) << " " << ( i * i ) - i + 1 << " " << ( i * i ) - ( 2 * i ) + 2  << " " << ( i * i ) - ( 3 * i ) + 3 << "\n"; 
		sum += ( i * i ) ; 	
		sum += ( i * i ) - i + 1 ; 	
		sum += ( i * i ) - ( 2 * i ) + 2 ;
		sum += ( i * i ) - ( 3 * i ) + 3 ;
	}
	cout << sum;
}


