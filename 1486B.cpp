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
        vector<int>vec_x,vec_y;
        ll x,y;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            vec_x.push_back(x);
            vec_y.push_back(y);
        }
        sort(vec_x.begin(),vec_x.end());
        sort(vec_y.begin(),vec_y.end());
        if(n&1)
            cout<<1<<endl;
        else
        {
            x=1+vec_x[(n/2)]-vec_x[(n/2)-1];
            y=1+vec_y[(n/2)]-vec_y[(n/2)-1];
            //cout<<x<<" "<<y<<endl;
            cout<<x*y<<endl;
        }
    }
}
