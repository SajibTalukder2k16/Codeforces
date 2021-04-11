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
        int half=n/2;
        if(n%2==0)
            half--;
        if(k>half)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int ara[n+1];
            for(int i=1;i<=n;i++)
                ara[i]=i;
            int cnt=0;
            for(int i=2;i<n;i+=2)
            {
                if(cnt==k)
                {
                    break;
                }
                swap(ara[i],ara[i+1]);
                cnt++;
            }
            for(int i=1;i<=n;i++)
                cout<<ara[i]<<" ";
            cout<<endl;
        }
    }

}
