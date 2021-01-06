#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,x;
        cin>>n>>x;
        int ara[n];
        ll sum = 0;
        ll cnt_max=0,cnt_min=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
            cnt_max+=ceil((double)ara[i]/(double)x);
        }
        cnt_min+=ceil((double)sum/(double)x);
        cout<<cnt_min<<" "<<cnt_max<<endl;
    }
}
