#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        map<int,int>::iterator it;
        int ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        if(n==1)
        {
            cout<<n<<endl;
            continue;
        }
        sort(ara,ara+n);
        vector<int>vec;
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                continue;
            }
            if(ara[i]==ara[i-1])
            {
                cnt++;
            }
            else
            {
                vec.push_back(cnt);
                cnt=1;
            }
        }
        vec.push_back(cnt);
        sort(vec.begin(),vec.end(),greater<int>());
        int ans=vec[0];
        if(vec[0]<=n/2)
            cout<<n%2<<endl;
        else
        {
            ans=n-vec[0];
            cout<<n-ans*2<<endl;
        }
    }
}
