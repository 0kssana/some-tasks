#include<iostream>
using namespace std;
int main()
{
	int n, i, check = 0, t = -1;
	const long long int N = 1000000;
	long long int a[N];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 6;
	}
	for (i = 0; i < n - 1; i++)
	{
		if (a[i] == a[i + 1] && check == 0)
		{
			check++;
			for (int j = 0; j < n; j++)
			{
				cout << a[j] << " ";
			}
			cout << endl;
			cout << "YES ";
		}
		if (a[i] == a[i + 1])
		{
			if (i != t) {
				cout << i << " ";
			}
			cout << i + 1 << " ";
			t = i + 1;
		}
	}
	if (check == 0)
	{
		cout << "NO";
	}
	return 0;
}

