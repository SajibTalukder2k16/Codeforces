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
        string str;
        cin>>str;
        vector<int>vec_m,vec_t;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='M')
                vec_m.push_back(i+1);
            else
                vec_t.push_back(i+1);
        }
        int sz1=vec_t.size();
        int sz2=vec_m.size();
        int val=n/3;
        if(sz2!=val || sz1!=2*val)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool chk=true;
        for(int i=0;i<val;i++)
        {
            int post1=vec_t[i];
            int post2=vec_t[i+val];
            int posm=vec_m[i];
            if(post1>posm || posm>post2)
            {
                chk=false;
                break;
            }
        }
        if(chk==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
