#include<iostream>
using namespace std;

int m[40] ;
int a;
int p;
int main()
{

    for( int c = 21 ; c < 41 ; c++ )
    {
        a = c;
        for(int i = c / 2 ; i > 1 ; i-- )
        {
            if( a == 36 || a == 25 || a == 16 || a == 9 || a == 4)
            {
                break;
            }

            if( a % i == 0 )
            {
                cout << i << "\n";
                m[i]++;
                a = a / i ;
                p++;
                //m[i]++;
            }
        }

        if(p==0)
        {
            cout << a << "\n";
            //m[a]++;
        }

        p = 0;

        cout << "\n\n\n" ;

    }

    for(int u = 1 ; u < 41 ; u++ )
    {
        cout << u << ":" << m[u] << "  " ;
    }
}
