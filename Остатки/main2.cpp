#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, a, cnt=0;
    cin >> n >> a;
    int A[n];
    set <int> S;
    set <int>::iterator it;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    for(int i=0; i<n; i++){
        A[i]=A[i]%a;
        S.insert (A[i]);
    }
    for(it=S.begin(); it!=S.end(); it++){
            cnt+=*it;
        }
    cout << cnt << endl;
    if(cnt>a){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
