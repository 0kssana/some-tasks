	
Submission info
ID	117889
Problem	531
Received time	26.12.2017 10:47:03
Language	GNU C++14
Status	Accepted
User IP	31.186.51.67
 
Source
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    if(a>b&&a>c) {cout<<"Anton"; return 0;}
    if(b>c&&b>c) {cout<<"Boris"; return 0;}
    if(c>b&&c>a) {cout<<"Victor"; return 0;}
    if(a==b&&b>c) {cout<<"Victor"; return 0;}
    if(c==b&&b>a) {cout<<"Anton"; return 0;}
    if(a==c&&c>b) {cout<<"Boris"; return 0;}
    if(a==b&&b==c) {cout<<"Same age"; return 0;}
    return 0;
}
