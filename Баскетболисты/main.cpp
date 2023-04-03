#include <iostream>

using namespace std;

int main()
{
    int A,B,N;
    int c = 0;
    cin>>N;
    cin>>A;
    cin>>B;
    int bh[N];
    for (int i=0; i<N; i++)
    {
        cin>>bh[i];
        if (bh[i]>=A && bh[i]<=B) c++;
    }

    cout<<c;
    return 0;
}

