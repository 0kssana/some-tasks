#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a==1||a==2||a==12)
        cout <<"Winter";
    else if (a==3||a==4||a==5)
        cout<<"Spring";
    else if (a==6||a==7||a==8)
        cout<<"Summer";
    else if (a==9||a==10||a==11)
        cout << "Autumn";
    else if (a>12)
        cout <<"Wrong number";
    return 0;
}

