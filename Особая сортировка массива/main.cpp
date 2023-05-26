#include <iostream>
#include <algorithm>

using namespace std;
bool compare(int a, int b)
{
    return a>b;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n/2);
    sort(a+n/2,a+n,compare);
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
            cout<<a[i];
        else cout<<a[i]<<" ";
    }
    return 0;
}
