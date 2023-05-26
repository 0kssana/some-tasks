#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[n],nc=n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int k=0;k<n-1;k++)
    {
        if(a[k]==a[k+1])
            nc--;
    }
    cout<<nc<<endl;
    for(int i=0;i<n;i++)
        if(i!=n-1)
            cout<<a[i]<< " ";
        else cout<<a[i];
    return 0;
}
