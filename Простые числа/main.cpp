#include <iostream>

using namespace std;

int main()
{
    int a,b,i,r;
    cin>>a;
    cin>>b;
    r=1;
    for(i=a;i<=b;i++)
    {
        int count=0;
        int k=2;
        while (k*k<=i && count==0)
        {
            if(i%k==0)count++;
            k++;
        }
        if(count==0)
        {
            if(r==1)
            {
                cout<<i;
                r=r-1;
            }
            else
            {
                cout<<" "<<i;
            }

        }

    }
    return 0;
}
