#include <iostream>

using namespace std;

int main()
{
int as, sd = 0;
cin >> as;
int POI[as];
for (int df = 0; df < as; df++)
{
cin >> POI[df];
}
int max = POI[0], fg = 0;
for(int df = 1; df < as; df++)
if (POI[df] > max)
{
max = POI[df];
fg = df;
}
while(max > 0)
{
max = max - 1;
for(int df = 0; df < as; df++)
{
if(POI[df] == max)
{
cout << POI[df];
sd++;
break;
}
}
if(sd > 0)
break;
}
}
