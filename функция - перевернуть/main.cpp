#include <iostream>

using namespace std;

int main()
{
    int a,b=0;
    cin>>a;
    while (a)
    {
        b=b*10+a%10;
        a/=10;
    }
    cout<<b;
    return 0;
}

