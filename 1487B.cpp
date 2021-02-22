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
        int n,k;
        cin>>n>>k;
        int value = k/n;
        int mod = k%n;
        int ans = value*2 +mod;
        if(mod>=((n/2)+1-value))
            ans++;
        if(mod>=(n-value))
            ans++;
        if(ans>n)
            ans=ans%n;
        if(ans==0)
            ans=n;
        cout<<ans<<endl;

    }
}
