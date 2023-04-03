#include <iostream>

using namespace std;
void Factorial(int a)
{
    long long int p=1;
    if(a%2==0)
    for(int i=2; i<=a; i+=2)
            p*=i;
    else
        for(int i=1;i<=a;i+=2)
        p*=i;
cout<<p;

}

int main()
{
    int s;
    cin>>s;
    Factorial(s);
    return 0;
}
