#include <iostream>

using namespace std;

void Gradys(int f)
{
    int a=(f*1.8)+32;
    cout << a;
}

int main()
{
    int c;
    cin >> c;
    Gradys(c);
    return 0;
}
