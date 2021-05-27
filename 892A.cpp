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
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll best=-1,second_best=-2;
    ll best_pos=-1,second_best_pos=-1;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        ll dif=b[i];
        if(dif>best)
        {
            second_best=best;
            second_best_pos=best_pos;
            best=dif;
            best_pos=i;
        }
        else if(dif>=second_best)
        {
            second_best=dif;
            second_best_pos=i;
        }
    }
    ll cap=best+second_best;
    //cout<<best<<" "<<second_best<<" "<<sum<<endl;
    if(cap>=sum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
