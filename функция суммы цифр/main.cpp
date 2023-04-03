#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >>a;
    int sum=0;
    while (a>9)
    {
        int N=a%10;
        a=a/10;
        sum=sum+N;
        cout<<N<<"+";
    }
    sum=sum+a;
    cout<<a<<"="<<sum;
    return 0;
}
