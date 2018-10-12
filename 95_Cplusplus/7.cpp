#include <iostream>
#include <iomanip>
using namespace std;

int counter = 1;
int p[168] = {2};

int main()
{
	int i = 3;
	for(int i = 3 ; i <= 1000 ; i++ )
	//while(counter <= 10001 )
	{
		for(int n = 2 ; n <= i - 1 ; n++ )
		{
			if( i % n == 0)
			{
				break;
			}
			
			if( n == i - 1 )
			{
				counter++;
				//cout << counter << setw(10) << i << "\n";
				p[counter - 1] = i;
			}
			
			
		}
		
		//i++;
	}

	for(int x = 0 ; x < 168 ; x++ )
	{
		cout << x << setw(10) << p[x] << "\n";
	}

}
