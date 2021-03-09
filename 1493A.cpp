#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mx 100009
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int from = k/2;
        if(k%2)
            from++;
        //cout<<from<<endl;
        vector<int>vec;
        for(int i=from;i<=n;i++)
            if(i!=k)
                vec.push_back(i);
        cout<<vec.size()<<endl;
        for(int i=0;i<vec.size();i++)
                cout<<vec[i]<<" ";
        cout<<endl;

    }
}
