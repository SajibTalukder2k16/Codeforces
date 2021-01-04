#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int len = s.length();
        if(len%2==0 && s[0]!=')' && s[len-1]!='(')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
