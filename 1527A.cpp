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
        ll n;
        cin>>n;
        ll ans=1;
        ll temp=n;
        int cnt=0;
        while(temp)
        {
            temp/=2;
            cnt++;
        }
        cnt--;
        while(cnt)
        {
            ans*=2;
            cnt--;
        }
        cout<<ans-1<<endl;
        //cout<<powl(2,cnt-1)-1<<endl;
    }
}
