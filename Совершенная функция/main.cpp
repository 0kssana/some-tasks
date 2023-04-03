#include <iostream>
using namespace std;
int Chislo(int n)
{
    int sum = 0;

for (int div = 1; div < n; div++)
{
	if (n % div == 0)
	sum += div;
}
return sum;

}
int main()
{
	int n;
	cin>>n;
		if (Chislo(n) == n)
        cout <<"YES";
        else
            cout<<"NO";
return 0;
}
