#include <iostream>
#include <vector>
#include <fstream>
#include <set>
using namespace std;
ofstream fout("25.out");
int value[201] = {-1};
//int sum[1000] = {0};
//int x = 0;
int main()
{
	value[0] = 1;
	char a[8];
	for ( int i = 1 ; i <= 200 ; i++ )
	{
		if ( i - 1 >= 0 && value[i-1] != -1 )
			value[i] += value[i-1];
			
		if ( i - 2 >= 0 && value[i-2] != -1 )
			value[i] += value[i-2];
			
		if ( i - 5 >= 0 && value[i-5] != -1 )
			value[i] += value[i-5];
			
		if ( i - 10 >= 0 && value[i-10] != -1 )
			value[i] += value[i-10];
			
		if ( i - 20 >= 0 && value[i-20] != -1 )
			value[i] += value[i-20];
			
		if ( i - 50 >= 0 && value[i-50] != -1 )
			value[i] += value[i-50];
			
		if ( i - 100 >= 0 && value[i-100] != -1 )
			value[i] += value[i-100];
			
		if ( i - 200 >= 0 && value[i-200] != -1 )
			value[i] += value[i-200];
	}
	
	cout << value[3];
}



