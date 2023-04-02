#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b&&b==c&&a==c)
        cout<<3;
    if (a==b&&a!=c||a==c&&a!=b||b==c&&b!=a)
        cout<<2;
    if (a!=b&&b!=c&&a!=c)
        cout<<1;
    return 0;
}
