#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a , b;
    cin >> a;
    vector<int> v(a);
    for(int i = 0;i < a;i ++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout << v[0] << " " << v[1];
    return 0;
}
