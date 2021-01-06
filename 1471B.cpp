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
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        ll sum =0;
        ll step_limit=INT_MAX;
        ll step_limit_position = -1;
        for(int i=0;i<n;i++)
        {
            ll cnt = 1;
            ll temp = ara[i];
            while(temp%x==0 && cnt<=step_limit)
            {
                temp/=x;
                cnt++;
            }
            if(cnt<step_limit)
            {
                step_limit=cnt;
                step_limit_position=i;
            }
        }
        //cout<<"Step Limit: "<<step_limit<<endl;
        for(int i=0;i<n;i++)
        {
            if(ara[i]%x==0)
            {
                int cnt=1;
                int step_count = 1;
                int temp_step_limit = step_limit;
                if(i<=step_limit_position)
                    temp_step_limit++;
                //temp_step_limit=max(temp_step_limit,1);
                while(ara[i]%x==0 && step_count<=temp_step_limit)
                {
                    sum+=(ara[i]*cnt);
                    step_count++;
                    //cout<<ara[i]<<" "<<cnt<<endl;
                    cnt*=(x);
                    ara[i]/=x;
                }
                if(temp_step_limit>=step_count)
                    sum+=(ara[i]*cnt);
                //cout<<ara[i]<<" "<<cnt<<endl;
            }
            else
                sum+=ara[i];
        }
        cout<<sum<<endl;
    }
}
