#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int p=0;
    int c;
    int A[a];
    int i=0;
    int y=0;
    int r=0;
    int g=0;
    for(i=0;i<a;i++)
    {
        cin>>c;
        A[i]=c%b;
    }
    for(i=0;i<a;i++)
    {
        for(g=1;g<=i;g++)
        {
            if(A[i]==A[i-g])
            {
            break;
            }
        }
        if(g==i+1)
        {
        r++;
        }
    }
cout<<r;
    return 0;
}
