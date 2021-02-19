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
        ll n;
        cin>>n;
        ll ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        ll temp =0;
        bool chk = true;
        for(int i=0;i<n-1;i++)
        {
            if(temp>ara[i])
            {
                chk=false;
                break;
            }
            ll x = ara[i]-temp;
            ara[i+1]+=x;
            ara[i]=temp;
            temp++;
            if(temp>ara[i+1])
            {
                chk=false;
                break;
            }
        }
        if(chk==false)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}
