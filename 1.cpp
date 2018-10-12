#include <iostream>
using namespace std;

int main() {
	
int n = 0;

for ( int i = 1; i < 1000 ; i = i + 1)
{
	if (i % 3 == 0)
	{ 
		n = n + i ;	
	}
	
	if (i % 5 == 0)
	{
		n = n + i ;
	}
	
	if (i % 15 == 0)
	{
		n = n - i ;
	}
	
	
}

cout << n << "\n";


}
