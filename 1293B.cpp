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
    float sum=0;
    for(int i=n;i>=1;i--)
    {
        float val=i;
        sum+=(1.0/val);
    }
    printf("%.6f\n",sum);
}
