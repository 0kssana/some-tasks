#include <iostream>
using namespace std;
int NOD (int a, int b)
{
while (a!=b)
{
if (a>b)
a-=b;
else
b-=a;
}
return a;
}


int main()
{
int v,g;
cin>>v>>g;
cout <<"GCD("<<v<<","<<g<<")="<<NOD(v,g)<<endl;
return 0;
}
