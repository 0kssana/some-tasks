#include <iostream>

using namespace std;

int main()
{
    int a, i = 0, c = 0;
    cin >> a;
    int N[a];
    for(i; i < a; i++)
    {
        cin >> N[i];
    }
    i = 0;
    for(i; i < a-1; i++)
    {
        if(N[i+1] > N[i])
        {
            swap(N[i+1], N[i]);
            c++;
        }
    }
    cout << c;
    return 0;
}
