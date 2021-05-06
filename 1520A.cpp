#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 5000001
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
        vector<int>vec[26];
        for(int i=0;i<n;i++)
        {
            int pos=str[i]-'A';
            vec[pos].push_back(i);
        }
        bool chk = true;
        for(int i=0;i<26;i++)
        {
            if(vec[i].size()>1)
            {
                int sz=vec[i].size();
                for(int j=1;j<sz;j++)
                {
                    if(vec[i][j]-vec[i][j-1]>1)
                    {
                        chk=false;
                        break;
                    }
                }
            }
            if(chk==false)
                break;
        }
        if(chk==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
