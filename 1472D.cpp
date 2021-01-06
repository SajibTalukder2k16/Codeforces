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
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        ll sum=0;
        for(int i=0,j=n-1;i<n;i++,j--)
        {
            //cout<<"Value: "<<i<<" "<<ara[i]<<endl;
            if(i%2==0)
            {
                if(ara[j]%2==0)
                    sum+=ara[j];
            }
            else
            {
                if(ara[j]&1)
                    sum-=ara[j];
            }
        }
        //cout<<"SUm:"<<sum<<endl;
        if(sum>0)
            cout<<"Alice"<<endl;
        else if(sum<0)
            cout<<"Bob"<<endl;
        else
            cout<<"Tie"<<endl;
    }
}
