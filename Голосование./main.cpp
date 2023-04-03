#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    for (a; a>0; a--)
    {
        int b,c,d;
        cin>>b>>c>>d;
        if (d+b+c>1)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }

    return 0;
}
