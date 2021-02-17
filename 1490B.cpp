#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
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
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]%3==0)
                c0++;
            else if(ara[i]%3==1)
                c1++;
            else
                c2++;
        }
       // cout<<c0<<" "<<c1<<" "<<c2<<endl;
        int target = n/3;
        if(target==c0 && target==c1 && target==c2)
        {
            cout<<0<<endl;
        }
        int cnt =0;
        if(c0<target)
            cnt++;
        if(c1<target)
            cnt++;
        if(c2<target)
            cnt++;
        if(cnt==2)
        {
            int mx = max(c0,max(c1,c2));
            if(mx==c0)
            {
                int ans = (target-c1)+(target-c2)*2;
                cout<<ans<<endl;
            }
            else if(mx==c1)
            {
                int ans = (target-c2)+(target-c0)*2;
                cout<<ans<<endl;
            }
            else
            {
                int ans = (target-c0)+(target-c1)*2;
                cout<<ans<<endl;
            }
        }
        else if(cnt==1)
        {
            int ans =0;
            if(c0<target)
            {
                ans=(c2-target)+(c1-target)*2;
                cout<<ans<<endl;
            }
            else if(c1<target)
            {
                ans =(c0-target)+(c2-target)*2;
                cout<<ans<<endl;
            }
            else
            {
                ans =(c1-target)+(c0-target)*2;
                cout<<ans<<endl;
            }
        }
    }
}
