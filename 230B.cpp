#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 1000005
bool check[mx]={false};
void sieve()
{
    int s=sqrt(mx);
    for(int i=3;i*i<=mx;i+=2)
    {
        for(int j=i*i;j<=mx;j+=2*i)
        {
            check[j]=true;
        }
    }
}
int main()
{
    sieve();
    int n;
    cin>>n;
    ll num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        ll val=sqrt(num);
        if(num==1)
            cout<<"NO"<<endl;
        else if(val*val==num)
        {
            if(val==2 || ((val&1) && check[val]==false))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
