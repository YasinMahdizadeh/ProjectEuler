#include <iostream>
using namespace std;


int fibo(int i)
{
   if(i == 1 || i == 2)
   {
      return 1;
   }
   else
   {
      return fibo(i-1)+fibo(i-2);
   }
}


int main()
{

int sum = 0;
int n = 1;

while(fibo(n) < 4000000)
{
   if(fibo(n)%2==0)
   {
      sum = sum+ fibo(n);
   }

n++;

}

cout << sum;

}