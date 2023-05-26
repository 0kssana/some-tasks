#include <iostream>

using namespace std;

int main()
{
int qw, we, er;
cin >> qw;
int VFRT[qw + 1];
for(int rt = 0; rt < qw; rt++)
cin >> VFRT[rt];
cin >> we >> er;
for(int rt = qw; rt >= er - 1; rt --)
VFRT[rt + 1] = VFRT[rt];
VFRT[er - 1] = we;
for(int rt = 0; rt < qw + 1; rt++)
cout << VFRT[rt] << " ";
return 0;
}

