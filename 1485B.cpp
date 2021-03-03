#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,k;
    cin>>n>>q>>k;
    int ara[n+1];
    for(int i=1;i<=n;i++)
        cin>>ara[i];
    long long cum[n+1]={0};
    long long last[n+1],first[n+1];
    cum[0]=0;
    ara[0]=0;
    for(int i=1;i<n;i++)
        cum[i]=cum[i-1]+ara[i+1]-ara[i-1]-2;
    cum[n]=cum[n-1]+k-ara[n-1]-1;
    last[1]=k-1;
    for(int i=2;i<=n;i++)
        last[i]=k-ara[i-1]-1;
    for(int i=1;i<n;i++)
        first[i]=ara[i+1]-2;
    first[n]=k-1;
    int left,right;
    for(int i=0;i<q;i++)
    {
        cin>>left>>right;
        if(left==right)
        {
            cout<<k-1<<endl;
            continue;
        }
        //cout<<cum[]
        long long sum = cum[right-1]-cum[left];
        //cout<<sum<<endl;
        sum+=first[left];
        //cout<<sum<<endl;
        sum+=last[right];
        cout<<sum<<endl;
    }
}
