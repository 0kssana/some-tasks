#include <iostream>

using namespace std;

int main()
{
   int a;
   cin >> a;
   int N[a];
   int sum=0;
   int i=0;
   for(i;i<a;i++)
   {
       cin >> N[i];
       sum=sum+N[i];
   }
   cout << sum/i;
    return 0;
}

