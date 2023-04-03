#include <iostream>

using namespace std;
int NOD (int a, int b)
{
    while (a!=b)
    {
        if (a>b)
            a-=b;
        else
            b-=a;
    }
    return a;
}


int main()
{
    int x,y;
    cin>>x>>y;
    int z=NOD(x,y);
    if(z==1){
    cout<<"YES";
    }
    else{
    cout<<"NO";}
    return 0;
}
