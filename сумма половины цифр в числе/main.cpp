#include <iostream>

using namespace std;
int main ()
{
int N;
int p = 1, k=0 ,n;
cin >>N;
 n=N;

while (p<=N) {
  k++;
  p *= 10;
}
if (p > N) p /= 10;
if (k%2==0) k /= 2;
int s = 0;
for(int i=0; i<k; i++) {
 s += n/p;
 n = n%p;
 p /= 10;
}
cout << s;
return 0;
}
