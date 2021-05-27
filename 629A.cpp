#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mod 1000000007
int main()
{
    int n;
    cin>>n;
    char grid[n+1][n+1];
    ll ans=0;
    int ara[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int j=1;j<=n;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='C')
            {
                cnt++;
                ara[j]++;
            }
        }
        ans+=(cnt*(cnt-1))/2;
        if(i==n)
        {
            for(int j=1;j<=n;j++)
            {
                cnt=ara[j];
                ans+=(cnt*(cnt-1))/2;
            }
        }
    }
    cout<<ans<<endl;
}
