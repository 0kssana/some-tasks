#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main()
{
	int n = 0, cnt = 0 ,x , k = 0;
	cin >> n;
	set<int> s , s1;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s.insert(x);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s1.insert(x);
	}
	auto it1 = s.begin();
	auto it2 = s1.begin();
	if (s.size() != s1.size()) {
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < s.size(); i++) {
		if (*it1 != *it2 ) {
			cout << "NO";
			return 0;
		}
		++it1;
		++it2;
	}
	cout << "YES";
	system("pause");
	return 0;
}
