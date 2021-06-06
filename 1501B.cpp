#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define pi 3.141593

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        bool output[n]={false};
        for(int i=n-1;i>=0;)
        {
            //cout<<"Before: "<<i<<endl;
            if(ara[i]==0)
            {
                i--;
                continue;
            }
            for(int j=i,t=ara[i];j>=0&& t>0;j--)
            {
                output[j]=true;
                t=max(t-1,ara[j]-1);
                //t--;
            }
            i=i-ara[i];
            //cout<<i<<endl;
        }
        for(int i=0;i<n;i++)
            cout<<output[i]<<" ";
        cout<<endl;
    }
}
