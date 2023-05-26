#include <set>
#include <iostream>

using namespace std;
int main()
{

    set <int> a, b;

           int els, c;

    cin >> c;

          for(int i = 0; i < c; i++){

              cin >> els;

                a.insert(els);
    }
       cin >> c;

    for(int i=0; i < c; i++){

        cin >> els ;

        b.insert(els);

    }
    cout << (a == b ? "YES" : "NO");
 }

