#include <iostream>

using namespace std;

int main()
{
    int a, maxid = 0;
    cin >> a;
    int els [a];
    for (int i = 0; i < a; i++) cin >> els [i];
    for (int i = 1; i < a; i++) if (els [i] > els[maxid]) maxid = i;
    swap(els [0], els [ maxid]);
    for (int i = 0; i < a; i++) cout << els [i] << " ";
    return 0;
}

