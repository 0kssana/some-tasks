#include <iostream>

using namespace std;

int main()
{
    int y,x,z;
    cin>>y>>x>>z;
    if (y>z&&y>x&&y<=x+z)
        cout<<"YES";
    else   if (y>z&&y>x&&y>x+z)
        cout<<"NO";
    else   if (z>y&&z>x&&z<=x+y)
        cout<<"YES";
    else   if (z>y&&z>x&&z>x+y)
        cout<<"NO";
    else   if (x>y&&x>y&&x<=z+y)
        cout<<"YES";
    else   if (x>y&&x>z&&x>y+z)
        cout<<"NO";
    else if (y==z||z==x||x==y)
        cout<<"YES";
    else if (y==z&&z==x)
        cout<<"YES";
    return 0;
}
