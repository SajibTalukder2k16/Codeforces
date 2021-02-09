#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        string s0="";
        for(int i=0;i<200;i++)
            s0+='a';
        cout<<s0<<endl;
        for(int i=0;i<n;i++)
        {
            if(s0[ara[i]]=='a')
                s0[ara[i]]='b';
            else
                s0[ara[i]]='a';
            cout<<s0<<endl;
        }
    }
}
