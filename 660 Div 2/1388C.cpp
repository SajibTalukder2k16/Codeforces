#include<bits/stdc++.h>
using namespace std;
#define mx 100000
vector<int>nodes[mx];
int people_in_cities[mx],peoples_mood[mx];
int connected_nodes[mx];
bool check=true;
int dfs(int source,int parent)
{
    int sz = nodes[source].size();
    connected_nodes[source]=people_in_cities[source];
    int sum_of_mood = 0;
    for(int i=0;i<sz;i++)
    {
        int v=nodes[source][i];
        if(v!=parent)
        {
            int temp = dfs(v,source);
            connected_nodes[source]+=temp;
            if((temp+peoples_mood[v])%2!=0)
                check=false;
            sum_of_mood+=(temp+peoples_mood[v])/2;
        }
    }
    int res = connected_nodes[source];
    int good_mood = (res+peoples_mood[source])/2;
    if(good_mood>res)
        check=false;
    if((res+peoples_mood[source])%2!=0)
        check = false;
    if(good_mood<sum_of_mood)
        check=false;
    return res;
}
int main()
{
    int test;
    cin>>test;
    //cout<<"NO: "<<test<<endl;
    while(test--)
    {
        check = true;
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            nodes[i].clear();
            connected_nodes[i]=0;
        }
        for(int i=1;i<=n;i++)
            cin>>people_in_cities[i];
        for(int i=1;i<=n;i++)
            cin>>peoples_mood[i];
        int n1,n2;
        for(int i=1;i<n;i++)
        {
            cin>>n1>>n2;
            nodes[n1].push_back(n2);
            nodes[n2].push_back(n1);
        }
        dfs(1,1);
        if(check==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}