#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
int main()
{
    //fileRead
    //fileWrite
    int test;
    cin>>test;
    while(test--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p%a==0 || p%b==0 || p%c==0)
        {
            cout<<0<<endl;
            continue;
        }
        ll x=a-p%a;
        ll y=b-p%b;
        ll z=c-p%c;
        //ll x=ceil((p*1.0)/a)*a-p;
        //ll y=ceil((p*1.0)/b)*b-p;
        //ll z=ceil((p*1.0)/c)*c-p;
        //cout<<x<<" "<<y<<" "<<z<<endl;
        cout<<min(x,min(y,z))<<endl;
    }
}
