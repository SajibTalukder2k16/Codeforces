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
    ll n;
    cin>>n;
    ll val=1;
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        val*=2;
        ans+=val;
    }
    cout<<ans<<endl;
}
