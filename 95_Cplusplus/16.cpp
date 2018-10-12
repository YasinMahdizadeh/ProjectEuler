#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

char number[500] = {'1'};
char num[] = "1234";
int inumber[500] ;
int length = 1;
int io = 0;
int n = 0;
int pow = 1 ;
int sum = 0;
/*
int length()
{
	int length = 0;
	
	while(inumber[length] != '\0')
	{
		length++;
	}	

		return length;
}*/

int main()
{
	
	inumber[0] = number[0] - '0';
while(pow < 1001)
{	
	sum = 0;
	for( int i = length ;  i >= 0 ; i-- )
	{
		inumber[i] = (inumber[i] ) * 2;
		if(io == 1)
		{
			inumber[i] = inumber[i] + 1;
			io = 0;
		}
		
		if(inumber[i] / 10 > 0)
		{
			inumber[i] = inumber[i] % 10;
			io = 1;
		}
		
		if(i == 0 && io == 1) ///// when loop is end
		{
			for( int o = length ;  o >= 0 ; o-- )
			{
				inumber[o+1] = inumber[o];
			}
			
			inumber[0] = 1;
			io = 0;
			length++;
		}	
	}
	
	cout<< pow << "\t";
	
	for( int n = 0 ;  n < length ; n++ )
	{
		cout << inumber[n] ;
		sum = sum + inumber[n];
	}
	cout << "\t" << sum;
	cout << "\n\n";
	//io = 0;
	pow++;
}
}
