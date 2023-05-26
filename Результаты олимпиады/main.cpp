#include <bits/stdc++.h>

using namespace std;

bool fastsort(pair <int,int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second< b.second;
    }
    return a.first> b.first;
}

int main()
{
    int n; cin >> n;
    vector <pair<int, int> > sort1(n);
    for (int i=0;i<n;i++)
{
        cin >> sort1[i].second >>sort1[i].first;
    }
    sort(sort1.begin(), sort1.end(), fastsort);
    for (int i = 0; i < n; i++)
    {
        cout << sort1[i].second<<' '<<sort1[i].first << endl;
    }
    return 0;
}

