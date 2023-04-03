#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    int i;
    for(i=0 ; i<N ; i++)
        A[i]=i*i;
   for(i=0;i<N;i++)
           cout<<A[i]<<" ";

    return 0;
}
