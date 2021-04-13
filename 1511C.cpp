#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 200009
#define mod 1000000007
int main()
{
    int n,q;
    cin>>n>>q;
    int ara[n];
    map<int,int>mp_ii;
    map<int,bool>mp_check;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(mp_check[ara[i]]==false)
        {
            mp_check[ara[i]]=true;
            vec.push_back(ara[i]);
            mp_ii[ara[i]]=i+1;
        }
    }
    int query;
    int sz=vec.size();
    for(int i=0;i<q;i++)
    {
        cin>>query;
        int pos=mp_ii[query];
        cout<<pos<<" ";
        mp_ii[query]=1;
        for(int j=0;j<sz;j++)
        {
            int val=vec[j];
            int p=mp_ii[val];
            if(p>pos||val==query)
                continue;
            mp_ii[val]++;
        }
    }
    cout<<endl;
}
