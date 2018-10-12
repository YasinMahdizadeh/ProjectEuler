#include <iostream>
#include <algorithm>
using namespace std;
char permutation[10] = {'0','1','2','3','4','5','6','7','8','9'};
long long ami_sum = 0;

int main() 
{
	for ( int i = 1 ; i < 1000000 ; i++ )
	{
		next_permutation(permutation,permutation+10);
	}
	cout << permutation;
}

