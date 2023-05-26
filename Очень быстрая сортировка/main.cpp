#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int B[N];
    for (int i=0; i<N; i++) {
        cin >> B[i];
    }
    sort(B, B+N);

    for (int i=0; i<N; i++){
        cout << B[i] << endl;
    }
    return 0;
}

