#include <iostream>

using namespace std;
void Delete(int c)
{
    int b=0;
    while(c)
        {
                if(c%2!=0)
                b=b*10+c%10;
                c/=10;
        }
        while(b)
        {
                c=c*10+b%10;
                b/=10;
        }
        cout<<c;

}
int main()
{    int a;
     int c=0;
    cin>>a;
    Delete(a);
return 0;
}
