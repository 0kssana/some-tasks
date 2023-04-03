#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int m = 10;
   for(int a=1; a<=n; a++)
   {
       if(a*a%m==a)
        cout << a << "*" << a << "=" << a*a << endl;
       if (a>=m)
        m= m * 10;
   }
return 0;
}
