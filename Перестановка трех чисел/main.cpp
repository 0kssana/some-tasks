#include <iostream>

using namespace std;

     void PrintPoPoryadku (int q, int w, int e)
{
     if (q >= w && q >= e && w >= e)
        cout << e << " " << w << " " << q;
       else if (q >= w && q >= e && e >= w)
        cout << w << " " << e << " " << q;
       else if (w >= q &&  w >= e && e >= q)
        cout << q << " " << e << " " << w;
       else if (w >= q && w >= e && q >= e)
        cout << e << " " << q << " " << w;
       else if (e >= q && e >= w && w >= q)
        cout << q << " " << w << " " << e;
       else if (e >= q && e >= w && q >= w)
        cout << w << " " << q << " " << e;
}

int main()
{
    int z, x, c;
    cin >> z >> x >> c;
    PrintPoPoryadku(z, x, c);
    return 0;
}

