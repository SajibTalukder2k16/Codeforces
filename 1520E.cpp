#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<ll>star_pos;
        int star_cnt=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='*')
            {
                star_cnt++;
                star_pos.push_back(i+1);
            }
        }
        ll ans=0;
        for(int i=0,val=star_cnt/2;i<star_cnt/2;i++,val--)
        {
            ll res=abs(star_pos[star_cnt/2]-val-star_pos[i]);
            ans+=res;
            //cout<<res<<" mid: "<<mid<<" val: "<<val<<" pos: "<<star_pos[i]<<endl;
        }
        for(int i=(star_cnt/2)+1,val=1;i<star_cnt;i++,val++)
        {
            ll res=abs(star_pos[star_cnt/2]+val-star_pos[i]);
            ans+=res;
        }
        cout<<ans<<endl;
    }
}
