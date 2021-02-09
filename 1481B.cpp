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
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        int cnt_bould = 0;
        int pos=-1;
        while(true)
        {
            bool chk = true;
            for(int i=0;i<n-1;i++)
            {
                if(ara[i]<ara[i+1])
                {
                    cnt_bould++;
                    ara[i]++;
                    chk = false;
                    if(cnt_bould==k)
                    {
                        pos=i+1;
                    }
                    break;
                }
            }
            if(chk==true || cnt_bould==k)
            {
                break;
            }
        }
        cout<<pos<<endl;
    }
}
