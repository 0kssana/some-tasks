#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
int as, sd = 0, flag = 0, maksa = -101, mina = 101, maksaa = 0, minaa = 0;
cin >> as;
int Q[as];
for (sd; sd < as; sd++)
{
Q[sd] = rand() % 101;
cout << Q[sd] << " ";
}
cout << endl;
for (sd = 0; sd < as; sd++)
{
if (Q[sd] > maksa)
{
maksa = Q[sd];
maksaa = sd;
}
if(Q[sd] < mina)
{
mina = Q[sd];
minaa = sd;
}
}
cout << mina << " " << minaa << endl;
cout << maksa << " " << maksaa << endl;
return 0;
}
