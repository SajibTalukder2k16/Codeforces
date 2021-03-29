#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mx 100009
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll r,c,x;
        cin>>r>>c>>x;
        ll val=x/r;
        ll mod=x%r;
        if(mod==0)
            mod=r,val--;
        cout<<(mod-1)*c+(val+1)<<endl;
    }
}
