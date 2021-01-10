#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n+1];
        for(int i=1;i<=n;i++)
            cin>>ara[i];
        ll max_sum=-1;
        ll cumulutive[n+1]={0};
        for(int i=n;i>0;i--)
        {
            cumulutive[i]=ara[i];
            if(ara[i]+i<=n)
            {
                ll temp = ara[i]+i;
                cumulutive[i]+=cumulutive[temp];
            }
            if(cumulutive[i]>max_sum)
                max_sum=cumulutive[i];
        }
        cout<<max_sum<<endl;
    }
}
