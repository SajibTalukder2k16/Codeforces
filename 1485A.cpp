#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        int cnt1=0,cnt2=0;
        if(b==1)
        {
            b++;
            cnt1=1,cnt2=1;
        }
        int iteration=0;
        int ans;
        int temp_a = a;
        int fixed=cnt1;
        while(temp_a)
        {
            temp_a/=b;
            cnt1++;
        }
        int loop = cnt1;
        ans = cnt1;
        for(int i=0;i<loop;i++)
        {
            temp_a = a;
            int temp_b=b+1;
            fixed++;
            cnt2=0;
            while(temp_a)
            {
                temp_a/=temp_b;
                cnt2++;
            }
            cnt2+=fixed;
            ans=min(ans,cnt2);
            cnt1=cnt2;
            b=b+1;
        }
        cout<<ans<<endl;
    }
}
