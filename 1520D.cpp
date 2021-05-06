#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 2000002
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        ll ara[n];
        ll ans=0;
        map<ll,ll>vec1;
        map<ll,ll>vec2;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            ll val=(ara[i]-(i+1));
            if(val>0)
            {
                ll t=vec1[val];
                ll sub=(t*(t-1))/2;
                ans-=sub;
                vec1[val]=vec1[val]+1;;
                t++;
                sub=(t*(t-1))/2;
                ans+=sub;
            }
            else
            {
                ll t=vec2[val];
                ll sub=(t*(t-1))/2;
                ans-=sub;
                vec2[val]=vec2[val]+1;;
                t++;
                sub=(t*(t-1))/2;
                ans+=sub;
            }
        }
        cout<<ans<<endl;
    }
}
