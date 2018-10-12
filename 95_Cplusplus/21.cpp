#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("11.in");
int sum[10001];
long long ami_sum = 0;

int main() 
{
	//sum[1] = 1;
	for ( int i = 2 ; i <= 10000 ; i++ )
	{
		for ( int j = i-1 ; j >= 1 ; j-- )
		{
			if ( i % j == 0 )
				sum[i] += j;
		}	
	}
	
	//cout << sum[284] << " " << sum[220];
	
	for ( int i = 2 ; i <= 10000 ; i++ )
	{
		if(sum[i] <= 10000 && sum[sum[i]] <= 10000 )
		{
			if( sum[sum[i]] == i && sum[i] != i)
			{
				cout << i << " " << sum[i] << "\n";
				ami_sum += i;
			}
		}
	}
	
	cout << ami_sum;
}

