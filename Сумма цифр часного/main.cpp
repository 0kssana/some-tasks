#include <iostream>

using namespace std;

int main()
{
   int a,b,c,d,e,f;
   f=1;
   cin >> a;
   for (int g=1;g<=a;g++)
   {
       b=g;
       e=1;
       while(b!=0)
       {
           c=b%10;
           if (c == 0 || g%c !=0)
           {
               e=0;
               break;
           }
           b=b/10;
       }
       if (e==1)
        if (f ==1)
       {
           cout << g;
           f = 0;
       }
       else
        cout<<" " <<g;
   }
    return 0;
}

