#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 1000001
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n];
        vector<pair<int,int> >vec;
        map<int,int>mp_count;
        map<int,bool>mp_check;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(mp_check[ara[i]]==false)
            {
                vec.push_back(mp(ara[i],i+1));
                mp_check[ara[i]]=true;
            }
            mp_count[ara[i]]++;
        }
        if(mp_count[vec[0].first]==1)
        {
            cout<<vec[0].second<<endl;
        }
        else
            cout<<vec[1].second<<endl;
    }
}
