#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    int to_minus = 0;
    int cnt4=0,cnt8=0,cnt15=0,cnt16=0,cnt23=0,cnt42=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]==4)
        {
            cnt4++;
        }
        else if(ara[i]==8)
        {
            if(cnt8+1<=cnt4)
                cnt8++;
        }
        else if(ara[i]==15)
        {
            if(cnt15+1<=cnt8)
                cnt15++;
        }
        else if(ara[i]==16)
        {
            if(cnt16+1<=cnt15)
                cnt16++;
        }
        else if(ara[i]==23)
        {
            if(cnt23+1<=cnt16)
                cnt23++;
        }
        else
        {
            if(cnt42+1<=cnt23)
                cnt42++;
        }
    }
    int mn = min(cnt4,min(cnt8,min(cnt15,min(cnt16,min(cnt23,cnt42)))));
    int ans = n-(mn*6);
    cout<<ans<<endl;
}
