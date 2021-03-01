#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
int main()
{
    int n,q;
    cin>>n>>q;
    int ara[n];
    int cnt_one = 0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
            cnt_one++;
    }
    int idx,option;
    for(int i=0;i<q;i++)
    {
        cin>>option>>idx;
        if(option==1)
        {
            idx--;
            if(ara[idx]==0)
            {
                ara[idx]=1;
                cnt_one++;
            }
            else
            {
                ara[idx]=0;
                cnt_one--;
            }
        }
        else
        {
            if(cnt_one>=idx)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    }
}
