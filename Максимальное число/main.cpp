#include <iostream>

using namespace std;

int main()
{
    int a,b,c,m;
    cin >>a>>b>>c;
    if(a>b&&a>c)
    {
        m=a;
    }
    if(b>c&&b>c)
    {
        m=b;
    }
    if(c>b&&c>a)
    {
        m=c;
    }
    cout<<m<<endl;

    return 0;
}
