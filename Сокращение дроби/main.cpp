#include <iostream>

using namespace std;
void rd(int a, int d)
{
    int k;
    k=1;
    while (k<10001)
    {
        if (a%k==0 && d%k==0)
        {
            a=a/k;
            d=d/k;
            k=1;
        }
        k=k+1;
    }
    cout <<a<<"/"<<d;
}
   int main()
   {
       int c,b;
       cin>>c>>b;
       rd (c,b);


 return 0;
}
