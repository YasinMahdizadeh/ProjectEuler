#include <iostream>
using namespace std;

int c;
int b;
int d;
int x;

int main() {
	
for(int i = 1 ; i < 101 ; i++ )
	{
	
	c = c + (i * i);
	
	b = b + i ;
	
	}
	
	d = b * b ;
	
	x = d - c ;
	
	cout << x ;
	
	
}
