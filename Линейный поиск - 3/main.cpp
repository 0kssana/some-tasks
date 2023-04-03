#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int b;
    int d;
    cin>>d;
    int A[d];
    int x;
    int i;
    int p=0;
    bool o=0;
    for ( i = 0; i < d; i++ )
    {
    cin>> x;
    A[i] = x;
    }
    cin >> b;
    for ( i = 0; i < d; i++ )
    {
 if(A[i]==b && o==1 )
    {
        cout<<" "<<i+1;
    }
    if(A[i]==b && o==0 )
    {
        cout<<i+1;
         o=1;
    }

    }

    if (o==0)
    cout <<endl;
    return 0;
}
