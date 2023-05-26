#include <iostream>

using namespace std;

int main()
{
int mn, lk = 0;
cin >> mn;
int SD[mn];
for(int po = 0; po < mn; po++)
cin >> SD[po];
for(int po = 0; po < mn - 1; po++)
for (int ty = mn - 2; ty >= po; ty--)
if(SD[ty] > SD[ty + 1])
{
swap(SD[ty], SD[ty + 1]);
lk++;
}
cout << lk;
return 0;
}

