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
        cin>>n>>k;;
        int ara[n];
        bool chk[101]={false};
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(chk[ara[i]]==false)
            {
                vec.push_back(ara[i]);
                chk[ara[i]]=true;
            }
        }
        int cnt_min = INT_MAX;
        int sz = vec.size();
        for(int j=0;j<sz;j++)
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(ara[i]!=vec[j])
                {
                    i+=k-1;
                    cnt++;
                }
            }
            if(cnt<cnt_min)
                cnt_min=cnt;
        }
        cout<<cnt_min<<endl;
    }
}
