#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
  int i,N,k=0,i2;
  cin>>N;
  int M[N];
  for (i=0; i<N; i++)
  {
    cin>>M[i];
  }
  for (i=0; i<N;i++,k++)
  {
      for(i2=i-1;i2>=0;i2--)
      {
    if (M[i]==M[i2])
    {
      k--;
      break;
    }
      }
  }
  cout<<k;
  return 0;
}
