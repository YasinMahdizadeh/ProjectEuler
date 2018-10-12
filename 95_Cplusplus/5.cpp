#include <iostream>
#include <cstdio>

using namespace std;

int minn = 0;

int main()
{
	int i = 2520 ;
	while(1)
	{
		if ( i % 16 == 0 && i % 9 == 0 && i % 5 == 0 && i % 7 == 0 && i % 11 == 0 && i % 13 == 0 && i % 17 == 0 && i % 19 == 0 )
		{cout << i; break;}
		i++;
	}
	
}

