#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a , c;
    cin >> a >> c;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a == c) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No";
    return 0;
}
