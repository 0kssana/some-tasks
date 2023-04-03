#include <iostream>

using namespace std;
void year (int d)
{
    if(d % 4 == 0 && d % 100 != 0 || d % 400 == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int a;
    cin >> a;
    year(a);
    return 0;
}
