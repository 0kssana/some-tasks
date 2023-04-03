#include <iostream>

using namespace std;

int main()
{
int as, ad = 0, af = 0;
cin >> as;
int Q[as];
for(ad; ad < as; ad++)
cin >> Q[ad];
for(int ag = 0; ag < as; ag++)
af += Q[ag]/2;
cout << af;
return 0;
}

