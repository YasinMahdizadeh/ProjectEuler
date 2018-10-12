#include <iostream>
#include <iomanip>
using namespace std;

int fibo( int unsigned long number )
{
	if ( number <= 2 )
	{
		return 1;
	}
	else
	{
		return fibo(number - 1) + fibo(number - 2);
	}
	
	
}

int main() 
{
	int i = 0;
	int sum = 0;
	
	while(fibo(i) < 4000000 )
	{
	cout << setw(5) << i << " = " << fibo(i) << "\n";
	i++;
	
	if(fibo(i) % 2 == 0)
	{
		sum = sum + fibo(i);
	}
	
	}

cout << sum;
}
