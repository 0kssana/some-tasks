#include <iostream>

using namespace std;
void PrintBin (int n)
{
    int k;
    k=128;
    while (k>0)
{
    cout <<n/k;
    n=n%k;
    k=k/2;
}
}

int main()
{
    int a;
    cin >>a;
    PrintBin (a);

    return 0;
}

