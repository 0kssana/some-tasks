#include <iostream>
#include <set>
using namespace std;

int main()
{
set < int > s, s2;
 int n , a;
 cin >> n;
for( int i = 0 ; i < n ; i ++ )
{
cin >> a;
s.insert( a ) ;
}
cin >> n ;
for ( int i = 0 ; i < n ; i ++ )
{
cin >> a;
s2.insert ( a );
}
if ( s == s2 )
cout << "YES\n";
else cout << "NO\n";
}
