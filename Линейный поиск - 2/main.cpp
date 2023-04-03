#include <iostream>

using namespace std;

int main()
{
int zx, xc =0, cv, vb = 0;
cin >> zx;
int AG[zx];
for (vb; vb < zx; vb++)
{
cin >> AG[vb];
}
cin >> cv;
for (vb = 0; vb < zx; vb++)
{
if(AG[vb] == cv)
xc++;
}
if (xc == 0)
cout << "NO";
else
cout << "YES";
return 0;
}

