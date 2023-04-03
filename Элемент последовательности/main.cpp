#include <iostream>

using namespace std;
long long int Bd(long long int * k)
{
    long long int a=1;
    long long int b=2;
    long long int c=3;
    long long int m=0;
    if(*k!=1 && *k!=2 && *k!=3)
    {
    for(long long int n=4;n<=*k;n++)
    {
        m=c+b-2*a;
        a=b;
        b=c;
        c=m;
    }
       cout<<m;
    }
    if(*k==1)
        cout<<1;
    if(*k==2)
        cout<<2;
    if(*k==3)
        cout<<3;

}
int main()
{
    long long int k;
    cin>>k;
    Bd(&k);
    return 0;
}
