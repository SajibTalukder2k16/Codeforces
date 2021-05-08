#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll x,y,z;
        y=a*b;
        x=a;
        z=a*(b+1);
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}
