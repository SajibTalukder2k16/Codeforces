#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 1000005
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int r,b,d;
        cin>>r>>b>>d;
        int maxi=max(r,b);
        int mini=min(r,b);
        int val=maxi/mini;
        if(val*mini!=maxi)
            val++;
        //cout<<maxi<<" "<<mini<<" "<<val<<endl;
        if(val-1<=d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
