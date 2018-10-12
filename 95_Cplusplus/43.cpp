#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <vector>

using namespace std;
int perm[10] = {0,1,2,3,4,5,6,7,8,9};
int d[7];
int counter = 0;
long long sum = 0;
vector <int> v;

int main()
{
	for ( int i = 1 ; i <= 3628800 ; i++ )
	{
		long long number = 0;
		d[0] = ( perm[1] * 100 ) + ( perm[2] * 10 ) + perm[3];
		d[1] = ( perm[2] * 100 ) + ( perm[3] * 10 ) + perm[4];
		d[2] = ( perm[3] * 100 ) + ( perm[4] * 10 ) + perm[5];
		d[3] = ( perm[4] * 100 ) + ( perm[5] * 10 ) + perm[6];
		d[4] = ( perm[5] * 100 ) + ( perm[6] * 10 ) + perm[7];
		d[5] = ( perm[6] * 100 ) + ( perm[7] * 10 ) + perm[8];
		d[6] = ( perm[7] * 100 ) + ( perm[8] * 10 ) + perm[9];
		
		if ( d[0] % 2 == 0 )
		{
			if ( d[1] % 3 == 0 )
			{
				if ( d[2] % 5 == 0 )
				{
					if ( d[3] % 7 == 0 )
					{
						if ( d[4] % 11 == 0 )
						{
							if ( d[5] % 13 == 0 )
							{
								if ( d[6] % 17 == 0 )
								{
									counter++;
									//number = (( perm[0] * 1000000000 ) + ( perm[1] * 100000000 ) + ( perm[2] * 10000000 ) + ( perm[3] * 1000000 ) + ( perm[4] * 100000 ) + ( perm[5] * 10000 ) + ( perm[6] * 1000 ) + ( perm[7] * 100 ) + ( perm[8] * 10 ) + ( perm[9] ) );
									v.push_back(perm[0]);v.push_back(perm[1]);v.push_back(perm[2]);v.push_back(perm[3]);v.push_back(perm[4]);v.push_back(perm[5]);v.push_back(perm[6]);v.push_back(perm[7]);v.push_back(perm[8]);v.push_back(perm[9]);v.push_back(0);v.push_back(0);

									number = 0;
								}
							}
						}
					}
				}
			}
		}
		if ( counter == 6 )
			break;
		cout << i << " " << perm[0] << perm[1]  << perm[2]  << perm[3]  << perm[4]  << perm[5]  << perm[6]  << perm[7]  << perm[8]  << perm[9] << " " << number << " " << counter << "\n";
		next_permutation(perm,perm+10);
	}
	cout << "\n\n";
	for ( int i = 0 ; i < v.size() ; i++ )
		{cout << v[i] << "\n";sum += v[i];}
		
		cout << sum;
	
}


