#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    for(n;n>0;n--)
    {
        cin>>x>>y;
        if(x+y==0)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}
