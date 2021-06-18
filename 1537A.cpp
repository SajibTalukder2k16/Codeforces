#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mod 1000000007
#define pi 3.141593
#define pb push_back
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        ll sum=0;
        int num;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            sum+=num;
        }
        if(sum==n)
            cout<<0<<endl;
        else if(sum<=n)
            cout<<1<<endl;
        else
            cout<<sum-n<<endl;
    }
}
