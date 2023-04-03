#include <iostream>
using namespace std;
int Summa(int n)
{
    int a=1;
    int b=0;
    while(n>0)
    {
        b+=n%10*a;
        a*=8;
        n/=10;
    }
    return b;
}
int Summa1(int l)
{
    int k=0;int b=l;
    while(b>0)
    {
        b/=10;
        k++;
    }
    int c[k+5];
    int i=0;
    while(l>0)
    {
        c[i]=l%8;
        l/=8;
        i++;
    }
    i--;
    for(;i>=0;i--)
    {
        l=l*10+c[i];
    }
    return l;
}
int main()
{
    int m,b;cin>>m>>b;
    m=Summa(m);
    b=Summa(b);
    cout<<Summa1(m+b);
    return 0;
}
