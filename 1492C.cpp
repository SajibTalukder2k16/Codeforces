#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    string big,small;
    cin>>big>>small;
    int last[m];
    for(int i=n-1,j=m-1;i>=0;i--)
    {
        if(small[j]==big[i])
        {
            last[j]=i;
            j--;
            if(j<0)
                break;
        }
    }
    int mx=-1;
    for(int i=0,j=0;i<n;i++)
    {
        if(small[j]==big[i])
        {
            int dist = last[j+1]-i;
            mx=max(dist,mx);
            //cout<<mx<<endl;
            j++;
            if(j==m-1)
                break;
        }
    }
    cout<<mx<<endl;

}
