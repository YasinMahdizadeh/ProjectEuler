#include<iostream>
using namespace std;

int number[100] = {0} ;
int number2[100] = {0} ;

int overflow = 0;

int main()
{
    number[99] = 1;

    //for ( int i = 21 ; i <= 40 ; i++ )
    int i = 21;
    {
        for ( int j = 99 ; j <= 0 ; j-- )
        {
            number2[j] = ( ( number[j] * i ) + overflow ) % 10 ;
            overflow = number[j] * i / 10 ;
            number[j] = number2[j];
        }
    }

    for ( int j = 80 ; j <= 99 ; j++ )
        cout << number[j];

}
