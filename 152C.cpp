#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mod 1000000007
int main()
{
    ll n,m;
    cin>>n>>m;
    string ara[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    ll ans=1;
    for(ll j=0;j<m;j++)
    {
        map<char,bool>mp_cb;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(mp_cb[ara[i][j]]==false)
            {
                mp_cb[ara[i][j]]=true;
                cnt++;
            }
        }
        ans=((ans%mod)*(cnt%mod))%mod;
    }
    cout<<ans<<endl;
}
