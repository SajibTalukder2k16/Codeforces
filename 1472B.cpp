#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n];
        int cnt_one =0,cnt_two=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==1)
                cnt_one++;
            else
                cnt_two++;
        }
        if(cnt_one&1)
        {
            cout<<"NO"<<endl;
        }
        else if(cnt_two==n && cnt_two&1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
