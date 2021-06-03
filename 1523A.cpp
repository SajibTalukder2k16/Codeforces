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
        int n,m;
        cin>>n>>m;
        string str;
        cin>>str;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
                vec.push_back(i);
        }
        int sz=vec.size();
        int cnt=m;
        if(sz>=1)
            for(int j=vec[0]-1;j>=0 && cnt>0;j--,cnt--)
                str[j]='1';
        cnt=m;
        if(sz>=1)
            for(int j=vec[sz-1]+1;j<n && cnt>0;j++,cnt--)
                str[j]='1';
        for(int i=1;i<sz;i++)
        {
            int dif=vec[i]-vec[i-1]-1;
            if(m*2<dif)
            {
                for(int j=vec[i-1]+1,cnt=m;j<n && cnt>0;cnt--,j++)
                    str[j]='1';
                for(int j=vec[i]-1,cnt=m;j>0 && cnt>0;cnt--,j--)
                    str[j]='1';
            }
            else
            {
                if(dif&1)
                {
                    for(int j=vec[i-1]+1;j<=vec[i]-1;j++)
                    {
                        if(j==vec[i-1]+1+(dif/2))
                            continue;
                        str[j]='1';
                    }
                }
                else
                {
                    for(int j=vec[i-1]+1;j<=vec[i]-1;j++)
                        str[j]='1';
                }
            }
        }
        cout<<str<<endl;
    }
}
