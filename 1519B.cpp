#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define pi 3.141593
#define mx 100
int dp[mx+1][mx+1];
void foo()
{
    dp[1][1]=0;
    for(int i=2;i<=mx;i++)
    {
        dp[1][i]=i-1;
        dp[i][1]=i-1;
    }
    for(int i=2;i<=mx;i++)
    {
        for(int j=2;j<=mx;j++)
        {
            int val1=dp[i][j-1]+i;
            int val2=dp[i-1][j]+j;
            dp[i][j]=min(val1,val2);
        }
    }

}
int main()
{
    foo();
    int test;
    cin>>test;
    while(test--)
    {
        int r,c,k;
        cin>>r>>c>>k;
        int ans=dp[r][c];
        if(ans==k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
