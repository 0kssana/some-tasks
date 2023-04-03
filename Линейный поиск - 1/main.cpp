#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
int as, sd = 0, df;
cin >> as;
int SN[as];
for (int fg = 0; fg < as; fg++)
{
SN[fg] = rand() % 1001;
cin >> SN[fg];
}
cin >> df;
for (int fg = 0; fg < as; fg++)
{
if(SN[fg] == df)
sd++;
}
cout << sd;
return 0;
}

