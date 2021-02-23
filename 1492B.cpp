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
        int ara[n+1];
        int pos[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>ara[i];
            pos[ara[i]]=i;
        }
        vector<int>vec;
        int cur = n;
        for(int i=n;i>=1;i--)
        {
            //cout<<pos[i]<<" "<<cur<<endl;
            if(pos[i]<=cur)
            {
                for(int j=pos[i];j<=cur;j++)
                    vec.push_back(ara[j]);
                cur=pos[i]-1;
            }
        }
        int sz=vec.size();
        for(int i=0;i<sz;i++)
            cout<<vec[i]<<" ";
        cout<<endl;
    }
}
