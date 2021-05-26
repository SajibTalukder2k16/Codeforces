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
    ll n,t;
    cin>>n>>t;
    ll k;
    cin>>k;
    ll l=1;
    ll r=n;
    ll sum=-1;
    ll prev_mid,mid=-1,prev_val=-1;;
    while(l!=r)
    {
        prev_mid=mid;
        prev_val=sum;
        mid=(l+r)/2;
        cout<<"? "<<l<<" "<<mid<<endl;
        cout.flush();
        cin>>sum;
        ll zeros=(mid-l+1)-sum;
        sum=zeros;
       // if(sum-1==k)
       // {
       //     l=prev_mid;
        //    break;
       // }
        if(k>sum)
        {
            k-=sum;
            l=mid+1;
        }
        else if(k<sum)
        {
            r=mid-1;
        }
        else
            r=mid;
    }
    cout<<"! "<<l<<endl;
}
