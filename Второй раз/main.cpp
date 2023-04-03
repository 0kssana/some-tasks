#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int A[a];
    int i;
    int x;
    for (i=0; i<a; i++ )
    {
       cin>>x;
       A[i]=x;
    }
    for(i=0;i<a;i++)
    {
        bool found=0;
        for(int e=0; e<a ;e++)
        {
           if (i==e)
           {
           continue;
           }
           if(A[i]==A[e])
           {
           found=1;
           break;
           }
        }
        if(found==0)
        {
        cout << A[i];
        break;
        }
    }
    return 0;
}

