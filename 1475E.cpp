#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mod 1000000007
ll dp[1001][1001];

ll nCr(ll n, ll r)
{
    if(n==r) return dp[n][r] = 1;
    if(r==0) return dp[n][r] = 1;
    if(r==1) return dp[n][r] = n;
    if(dp[n][r]!=-1) return dp[n][r];
    return dp[n][r] = ((nCr(n-1,r)%mod) + (nCr(n-1,r-1)%mod))%mod;
}
int main()
{
    memset(dp,-1,sizeof dp);
    //cout<<nCr(1000,500)<<endl;
    //return 0;
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,greater<int>());
        int sum=0;
        int val=ara[k-1];
        int cnt_val=0;
        int cnt_greater=0;
        for(int i=0;i<n;i++)
        {
            if(ara[i]==val)
                cnt_val++;
            if(ara[i]>val)
                cnt_greater++;
        }
        int r=k-cnt_greater;
        int C=cnt_val;
        cout<<nCr(C,r)<<endl;
    }
}
