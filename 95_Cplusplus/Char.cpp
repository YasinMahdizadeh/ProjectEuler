#include <iostream>
//#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;
int i[10] ;
int l = 1;
char* j;

int main()
{
	i[1] = 11;
	i[1] = i[1] * 2;
	
	while(i[1] / pow(10,l) > 0)
	{
		l++;
	}
	cout << l;
	/*
	while(i[1] / 10 > 0)
	{
		i[0]++;
		i[1] = i[1] - 10;
	}
			i[1] = i[1] % 10;

	cout << i[0] << "\t" << i[1] ;
*/
}
