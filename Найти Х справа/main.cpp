#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int A[a];
    int i=0;
    for(i=0;i<a;i++)
    {
        int b;
        cin>>b;
        A[i]=b;
    }
    int c;
    cin>>c;
    for(i=0;i<a;i++)
    {
        if(A[i]<=c && i!=a-1)
        {
            cout<<i+1<<" ";
        }
    }
    return 0;
}
