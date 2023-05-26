#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, M, count = 0, count2 = 0, i;
    cin >> N >> M;
    int A[N];
    for ( i = 0; i < N; i ++ )
        cin >> A[i];
    sort(A, A+N);
    for ( i = 0; i < N; i ++ )
    {
        if ( M % 2 == 1 )
        {
            if ( A[i] > M/2 )
                count++;
            else
                count2++;
        }
        if ( M % 2 == 0 )
        {
            if ( A[i] >= M/2 )
                count++;
            else
                count2++;
        }
    }
    for ( i = 0; i < N; i ++ )
    {
        if (A[i] == 0)
        {
            cout << "Boring";
            return 0;
        }
        else if (A[i] == M)
        {
               cout << "Boring";
            return 0;
        }
    }
    if (count < count2)
    {
        cout << "Boring";
         return 0;
    }
    cout << "Interesting";
    return 0;
}
