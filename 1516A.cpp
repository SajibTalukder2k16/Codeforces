#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 1000001
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        for(int i=0;i<n-1 && k>0;i++)
        {
            int mn = min(ara[i],k);
            ara[i]-=mn;
            k-=mn;
            ara[n-1]+=mn;
        }
        for(int i=0;i<n;i++)
            cout<<ara[i]<<" ";
        cout<<endl;
    }
}
