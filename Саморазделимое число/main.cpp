#include <iostream>

using namespace std;

int main ()
{
    int a,i,n,j,k;
    cin>>n>>k;
    for(i=n; i<=k; i++)
    {
        a=0;
        j=i;
        while(j>0)
        {
            if(j%10!=0)
            {
                if(i%(j%10)!=0)
                    a=1;
            }
            else
                a=1;
            j/=10;
        }
        if(a==0)
           if(k==1){
            cout<<i;
                k--;
           }

           else
            cout<<i<<" ";
    }
    return 0;
}
