#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        int min_a=INT_MAX;
        int min_b=INT_MAX;
        int a_ara[n],b_ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>a_ara[i];
            if(a_ara[i]<min_a)
                min_a=a_ara[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b_ara[i];
            if(b_ara[i]<min_b)
                min_b=b_ara[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int a=a_ara[i]-min_a;
            int b=b_ara[i]-min_b;
            sum+=min(a,b)+max(a,b)-min(a,b);
        }
        cout<<sum<<endl;
    }
}



