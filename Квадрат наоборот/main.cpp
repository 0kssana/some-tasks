#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int i=0;
    int A[a];
    for(i=a-1;i>=0;i--)
    {
        A[i]=i;
        A[i]=A[i]*A[i];
        cout<<A[i]<<" ";
    }
    return 0;
}
