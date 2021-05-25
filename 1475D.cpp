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
        ll n,m;
        cin>>n>>m;
        ll memory[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>memory[i];
            sum+=memory[i];
        }
        vector<ll>one,two;
        ll imp;
        for(int i=0;i<n;i++)
        {
            cin>>imp;
            if(imp==1)
                one.push_back(memory[i]);
            else
                two.push_back(memory[i]);
        }
        if(sum<m)
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(one.size()>0 && two.size()>0)
        {
            sort(one.begin(),one.end(),greater<int>());
            sort(two.begin(),two.end(),greater<int>());
            ll cur_pos_one=0;
            ll cur_pos_two=0;
            ll mem=0;
            ll one_size=one.size();
            ll two_size=two.size();
            ll prefix_one[one_size+1]={0};
            ll prefix_two[two_size]={0};
            prefix_one[0]=0;
            for(int i=1;i<=one_size;i++)
            {
                prefix_one[i]=prefix_one[i-1]+one[i-1];
            }
            for(int i=0;i<two_size;i++)
            {
                if(i==0)
                {
                    prefix_two[i]=two[i];
                    continue;
                }
                prefix_two[i]=prefix_two[i-1]+two[i];
            }
            ll ans=INT_MAX;
            for(ll i=0;i<one_size+1;i++)
            {
                ll val=prefix_one[i];
                if(val>=m)
                {
                    ans=min(ans,i);
                    break;
                }
                ll pos=upper_bound(prefix_two,prefix_two+two_size,m-val)-prefix_two;
                if(pos!=0)
                    if(val+prefix_two[pos-1]>=m)
                        pos--;
                if(pos==two_size)
                    continue;
                if(prefix_two[pos]+val>=m)
                {
                    ans=min(ans,i+(2*(pos+1)));
                    //cout<<ans<<" "<<val<<" "<<prefix_two[pos]<<endl;
                    //cout<<i<<" "<<pos<<endl;
                }
            }
            cout<<ans<<endl;
        }
        else
        {
            if(one.size()>0)
            {
                sort(one.begin(),one.end(),greater<int>());
                ll mem=0;
                ll cnt=0;
                ll i=0;
                while(mem<m)
                {
                    mem+=one[i++];
                    cnt++;
                }
                cout<<cnt<<endl;
                continue;
            }
            else
            {
                sort(two.begin(),two.end(),greater<int>());
                ll mem=0;
                ll cnt=0;
                ll i=0;
                while(mem<m)
                {
                    mem+=two[i++];
                    cnt+=2;
                }
                cout<<cnt<<endl;
                continue;
            }
        }
    }
}
