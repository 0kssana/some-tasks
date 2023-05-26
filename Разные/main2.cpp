#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,l,o,h,s;
        cin >>n;
      s=n;
    int A[n];
l=0;
      for (int r=0; r<n;r++)
    {
        cin >> A[r];
    }
     sort(A,A+n);
      for(int o=0; o<n; o++)
    {
        h=h+1;
          if(A[h]==A[o])
        {
            s=s-1;
        }
    }
    cout<<s;
      return 0;
    }

