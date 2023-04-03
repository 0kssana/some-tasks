#include <iostream>

using namespace std;

      int main()
{
     int d , k , r , a = 185;

                        for(int d = 0; d <= 13; d ++)
             for(int k = 0; k <= 11; k ++)
             for(int r = 0; r<= 9;  r ++)
                       if(d * 15 + k * 17 + r * 21 == 185)
             {
                     cout << d << " " << k << " " << r << endl;
             }

           return 0;



}
