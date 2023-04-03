#include <iostream>

using namespace std;

int main()
{
    int r;
    cin>>r;
    while(r>0)
    {
        if(r%10!=4&&r%10!=7)
        {
            cout<<"NO";
            return 0;
        }
        r=r/10;
    }
    cout<<"YES";
    return 0;
}

