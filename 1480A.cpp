#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int l = s.length();
        string out="";
        for(int i=0;i<l;i++)
        {
            if(i%2==0)
            {
                if(s[i]=='a')
                    out+='b';
                else
                    out+='a';
            }
            else
            {
                if(s[i]=='z')
                    out+='y';
                else
                    out+='z';
            }
        }
        cout<<out<<endl;
    }
}
