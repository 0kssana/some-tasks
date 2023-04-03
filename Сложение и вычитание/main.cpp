#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    if (a<0)
    {
        c=b-a;
        cout<<c;
    }
    if (a>0)
    {
        c=a+b;
        cout <<c;
    }
    return 0;
}

