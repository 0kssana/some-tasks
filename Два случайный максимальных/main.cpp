#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int QWE;
cin>> QWE;
int RTY[QWE];
srand(time(NULL));
for (int qw = 0; qw < QWE; qw++)
{
RTY [qw] = rand()%6;
cout <<RTY[qw]<<" ";
}
cout << endl;
int max = RTY[0];
int maxqw = 0;
for(int qw = 1; qw < QWE; qw++)
if (RTY[qw] > max)
{
max = RTY[qw];
maxqw = qw;
}
cout << max << " " << maxqw << endl;
maxqw = maxqw + 1;
for (int qw = maxqw; qw < QWE ; qw++)
{
if (max == RTY[qw])
cout << max << " " << qw << endl;
}
return 0;
}
