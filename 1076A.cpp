#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool chk = false;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1] && chk==false)
        {
            chk=true;
            continue;
        }
        cout<<s[i];
    }
    if(chk==true)
        cout<<s[n-1];
    cout<<endl;
}
