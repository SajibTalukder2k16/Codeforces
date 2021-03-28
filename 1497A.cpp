#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mx 100009
int main()
{
    int test;
    cin>>test;
    for(int cs=1;cs<=test;cs++)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        vector<int>vec1,vec2;
        int cnt = 0;
        vec2.push_back(ara[0]);
        for(int i=1;i<n;i++)
        {
            if(ara[i]==ara[i-1])
                vec1.push_back(ara[i]);
            else
                vec2.push_back(ara[i]);
        }
        int sz1=vec2.size(),sz2=vec1.size();
        for(int i=0;i<sz1;i++)
            cout<<vec2[i]<<" ";
        for(int i=0;i<sz2;i++)
            cout<<vec1[i]<<" ";
        cout<<endl;
    }
}
