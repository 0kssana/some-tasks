#include <iostream>

using namespace std;


  void ar(int a)
  {
      int r,k=1;
      int c=1000000;
      while (c>0)
      {
          r=a/c;
          if (r>0)\
            k=0;
          if (r!=0 || k==0)
          {
              cout << r<< endl;
          }
          a=a%c;
          c=c/10;
      }
  }
  int main ()
  {
      int k;
      cin >> k;
      ar (k);
      return 0;
  }

