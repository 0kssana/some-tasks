#include <iostream>

using namespace std;

int main()
{
    int b, x;
    cin >> b >> x;
    int a [b];
    for (int i = 0; i < b; i++) {
        cin >> a [i];
    }
    for (int i = 0; i < b; i++) {
        if (a [i] == x) cout << i << " ";
    }
    return 0;
}
