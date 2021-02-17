#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
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
        int cnt =0;
        for(int i=1;i<n;i++)
        {
            int mn = min(ara[i],ara[i-1]);
            int mx = max(ara[i],ara[i-1]);
            if(mn*2>=mx)
                continue;
            else
            {
                int temp =mn++;
                while(2*temp<mx)
                {
                    cnt++;
                    temp*=2;
                }
            }
        }
        cout<<cnt<<endl;

    }
}
