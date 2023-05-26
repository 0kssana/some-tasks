#include <iostream>

using namespace std;

int main()
{
    char a[26];
    for(char i='a';i<='z';++i)
    {
         a[i-'a']=i;
    }
    int r[26];
    for(int i=0;i<26;i++)
        r[i]=0;
    int f[26];
    for(int i=0;i<26;i++)
        f[i]=0;
    string slovo1;
    cin>>slovo1;
    string slovo2;
    cin>>slovo2;
    int u=0;
    for(int i=0;i<slovo1.size();i++)
    {
        u++;
        for(int p=0;p<26;p++)
        {
            if((char)slovo1[i]==(char)a[p])
            {
                r[p]++;
            }
        }
    }
    for(int i=0;i<slovo2.size();i++)
    {
        for(int p=0;p<26;p++)
        {
            if((char)slovo2[i]==(char)a[p])
            {
                f[p]++;
            }
        }
    }
    int i=0;
    bool t=0;
    for(i=0;i<26;i++)
    {
        if(f[i]!=r[i])
        {
            t=1;
            break;
        }
    }
    if(t==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
