#include <iostream>

using namespace std;

int main()
{
    int n,d,b,k=1,s=0;
    cin>>n;
    d=n;
    while (d/=10)
    {
        k++;
    }
    d=n;
    while (d)
    {
        if(k%2!=0)
        {
            b=d%10;
            s=s+b;
        }
        d/=10;
        k--;
    }
    cout<<s<<endl;
    return 0;
}
