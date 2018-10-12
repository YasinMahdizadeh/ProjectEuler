#include <iostream>
using namespace std;

int n;
int d = 3;
int day[7] = {0};
int history ;

int main()
{
	day[3] = 1;

    for ( int i = 1901 ; i < 2001 ; i++ )
    {
        for( int j = 1 ; j < 13 ; j++ )
        {
            if( j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12 )
                d = ( d + 31) % 7 ;
            
            if(j == 2 )
            {
				if( i % 400 == 0)
					d = ( d + 29) % 7 ;
				else if( i % 100 != 0)
				{
					if(i % 4 == 0 )
						d = ( d + 29) % 7 ;
					else
						d = ( d + 28) % 7 ;
				}
            }

			if(j == 4 || j == 6 || j == 9 || j == 11 )
				d = ( d + 30 ) % 7 ;
			
			history = d;

			switch(d)
			{
				case 0 : {day[0]++;break;}
				case 1 : {day[1]++;break;}
				case 2 : {day[2]++;break;}
				case 3 : {day[3]++;break;}
				case 4 : {day[4]++;break;}
				case 5 : {day[5]++;break;}
				case 6 : {day[6]++;break;}
			}
        }
    }
    day[history]--;

    for( int i = 0 ; i < 7 ; i++ )
		cout << day[i] << " "; 
}

