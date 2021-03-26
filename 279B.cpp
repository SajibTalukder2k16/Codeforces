#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mx 100009
int main()
{
    int n,k;
    cin>>n>>k;
    int ara[n];
    int cum[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(i==0)
            cum[i]=ara[i];
        else
            cum[i]=cum[i-1]+ara[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int x=0;
        if(i!=0)
            x=cum[i-1];
        int pos=lower_bound(cum,cum+n,cum[i]+k-ara[i])-cum;//-i;
        if(cum[pos]!=cum[i]+k-ara[i])
            pos--;
        pos=pos-i+1;
        //cout<<pos<<" "<<pos-i<<endl;
        if(pos>ans)
            ans=pos;
    }
    cout<<ans<<endl;
}
