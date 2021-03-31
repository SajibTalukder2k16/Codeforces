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
        int n,k1,k2;
        int w,b;
        cin>>n>>k1>>k2;
        cin>>w>>b;
        int mn1=min(k1,k2);
        int mn2=min(n-k1,n-k2);
        int mn=n-mn1-mn2;
        int x=w-mn1;
        int y=b-mn2;
        int val=mn/2;
        if(val>=x &&val>=y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
