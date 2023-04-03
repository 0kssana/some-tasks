#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    int gg[a];
    int k=0;
    int n=0;
    for (int i=0;i<a;i++)
    {
    cin>>d;
    gg[i]=d;
    if(gg[i]>=b && gg[i]<=c)
        {
           k++;
           n=n+gg[i];
        }
    }
    n=n/k;
    cout<<k<<" "<<n;
    return 0;
}

