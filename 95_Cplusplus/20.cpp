#include <iostream>
#include <cmath>
using namespace std;
int l = 0;
int j = 1;
int n = 363568;
int e ;
int f ;
int sum;
int h;
int i = 1;
int sum2 = 0;

int tajzie(int v)
{
	sum = 0;
	while( v / pow(10,l) >= 1 )
	{
		//cout << 363 / pow(10,i) << "\n";
		//cout << i;
		l++;
		
	}
	if(l == 0)
	{ l=1; }
	
	while(j <= l)
	{
		e = (pow(10,j)) ;
		f = pow(10,j -1);
		sum = sum + ( ( v % e ) / f );
		j++;
	}	
	j = 1;
	
	return sum;
}
int main()
{
	tajzie(n);
	
	
	cout << sum << "\n" ;
	
	
	for(int n = 1; n < 11 ; n++ )
	{
		i = i * n ;
		cout<< n << "\t" << i << "\n";
		tajzie(i);
		while(tajzie(sum) / 10 >= 1)
		{
			tajzie(sum);
		}
		i = sum;
		cout << n << "\t" << i << "\n\n"; 
		sum2 = sum2 + i;
	}
	
	cout << "\n" << i;
}
