
#include <iostream>

using namespace std;
void ar(int &a, int &b)
{
    int d,e,v;
    d=a;
    v=b;
    while(a!=b&&a!=0&&b!=0)
    {
        if (a>b)
        {
            a=a-b;

        }
        else
        {
            b=b-a;
        }


    }
    e=v*d/a;

    cout<<"GCD"<<" "<<a<<"\n"<<"LCM"<<" "<<e;
}

int main()
{
    int a,b;
    cin >>a>>b;
    ar(a,b);
    return 0;
}

