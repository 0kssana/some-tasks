#include <iostream>

using namespace std;

int main()
{
   for (int a=100; a<1000;a++)
   {
       int d = a%10;
       int e = a/10%10;
       int f = a/100;
       if (d*d*d+e*e*e+f*f*f==a)
        cout << a << endl;
   }
return 0;
}
