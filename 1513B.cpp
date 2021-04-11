#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 200009
#define mod 1000000007
ll pre[mx];
ll precal()
{
    pre[0]=1;
    for(ll i=1;i<=mx;i++)
    {
        pre[i]=((pre[i-1]%mod)*(i%mod))%mod;
        //cout<<pre[i]<<endl;
    }
}
int main()
{
    precal();
    int test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        ll ara[n];
        map<ll,ll>mp_ii;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            mp_ii[ara[i]]++;
        }
        sort(ara,ara+n);
        ll val=mp_ii[ara[0]];
        if(val<2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            ll cnt=((val%mod)*((val-1)%mod))%mod;
            ll num=ara[0];
            for(int i=0;i<n;i++)
            {
                num=num&ara[i];
                //cout<<num<<endl;
            }
            ll nn=ara[0];
            bool chk=true;
            if(nn!=num)
                chk=false;
            if(chk==false)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cnt=((cnt%mod)*(pre[n-2]%mod))%mod;
                cout<<cnt<<endl;
            }
        }
    }
}
