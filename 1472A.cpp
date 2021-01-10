#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        int cnt1=1;
        int cnt2=1;
        while(w%2==0)
        {
            cnt1*=2;
            w/=2;
        }
        while(h%2==0)
        {
            cnt2*=2;
            h/=2;
        }
        int ans = cnt1*cnt2;
        //cout<<ans<<endl;
        //cout<<cnt<<endl;
        if(ans>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
