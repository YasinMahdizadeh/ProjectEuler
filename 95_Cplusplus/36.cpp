/*
ID: yasin.m2
PROG: dualpal
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

ifstream fin("dualpal.in");
ofstream fout("dualpal.out");

int n , s ;
string ss ;
vector < int > v ;

bool Pali ( int number , int base )
{
	char c ;
	while( number > 0)
	{
		c = ( number % base ) + '0';
		ss = ss + c ; 
		number = number / base ;
	}
	
	for ( int i = 0 ; i < ss.length() / 2 ; i++ )
	{
		if ( ss[ss.size() - i - 1] != ss[i] )
			return false;
	}
	return true;
}

int main()
{
	//fin >> n >> s;
	int number = 0;
	//int m = s + 1;
	int repeat = 0;
	
	for( int m = 1 ; m <= 1000000 ; m++ ) 
	{
		if ( Pali ( m , 2 ) == true )
			repeat++;
		ss.clear();
		
		if ( Pali ( m , 10 ) == true )
			repeat++;
		ss.clear();
		
		if ( repeat == 2 )	
		{
			number++;
			v.push_back(m);
		}
		repeat = 0;
		cout << m << " " << number << "\n";
	}
	cout << "\n\n";
	for ( int i = 0 ; i < v.size() ; i++ )
	{
		cout << v[i] << "\n" ;
	}
	
//	cout << Pali( 5 , 2 );
}
