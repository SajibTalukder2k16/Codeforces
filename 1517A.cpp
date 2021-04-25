#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 1000005
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        if(n%2050!=0)
            cout<<-1<<endl;
        else
        {
            ll res=n/2050;
            ll sum=0;
            while(res)
            {
                sum+=res%10;
                res/=10;
            }
            cout<<sum<<endl;
        }
    }
}
