#include <iostream>
using namespace std;
int A(int a)
{
    int b[4],c,d,e;
    while (a!=0)
        {
        b[d]=a%10;
        a/=10;
        d++;
    }
    for(e=0;e<(d/2);e++)
    {
        c=b[e];
        b[e]=b[d-1-e];
        b[d-1-e]=c;
    }
    c=b[d-1];
    for(e=1;e<d;e++)
    {
        c=c*10+b[d-e-1];
    }
    return c;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int c=A(A(a)+A(b));
    cout<<c<<endl;
    return 0;
}
