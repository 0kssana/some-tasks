#include <iostream>

using namespace std;

int main()
{
    int x,y,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if ((x>0&&y>0)||(x==0&&y==0))
        {
            cout<<false<<endl;
        }
        else
        {
            cout<<true<<endl;
        }

    }
    return 0;
}
