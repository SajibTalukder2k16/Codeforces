#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int n = s.length();
        int u=0,d=0,r=0,l=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='R')
                r++;
            else
                l++;
        }
        bool chk = true;
        if(x<0)
        {
            int value = abs(x-0);
            if(l<value)
                chk=false;
        }
        if(x>0)
        {
            if(r<x)
                chk=false;
        }
        if(y<0)
        {
            int value = abs(y-0);
            if(d<value)
                chk=false;
        }
        if(y>0)
        {
            if(u<y)
                chk=false;
        }
        if(chk==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
