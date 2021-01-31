#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int p[n];
        ll cumulutive[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            if(i==0)
                cumulutive[i]=p[i];
            else
                cumulutive[i]=p[i]+cumulutive[i-1];
        }
        double increasing_amount = 0;
        for(int i=n-1;i>0;i--)
        {
            double net_value = (cumulutive[i-1]+increasing_amount)*(k*1.0);
            double rate = (p[i]*100.0)/net_value;
            if(rate<=1.0)
                continue;
            else
            {
                increasing_amount+=ceil((p[i]*100.0-net_value)/k*1.0);
            }
        }
        cout<<(ll)ceil(increasing_amount)<<endl;
    }
}
