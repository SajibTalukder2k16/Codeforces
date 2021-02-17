#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
int main()
{
    vector<ll>vec;
    for(ll i=1;i<=10000;i++)
    {
        ll val = i*i*i;
        vec.push_back(val);
    }
    int test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        bool chk = false;
        for(int i=0;i<10000;i++)
        {
            ll temp = vec[i];
            if(temp>n)
                break;
            ll rem = n-temp;
            if(rem<=0)
                break;
            ll x = cbrt(rem);
            if(x*x*x==rem)
            {
                chk = true;
                break;
            }
        }
        if(chk==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
