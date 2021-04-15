#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 1000001
int main()
{
    //fileWrite
    int test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        ll ara[n];
        ll val=0;
        ll ans=0;
        int prev=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if(ara[i]<0)
            {
                ll x=abs(ara[i]-0);
                if(sum<x)
                    sum=0;
                else
                    sum-=x;
            }
            else
            {
                sum+=(ll)ara[i];
            }
            //cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
}
