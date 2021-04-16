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
        vector<int>vec_odd,vec_even;
        int num;
        while(n--)
        {
            cin>>num;
            if(num&1)
                vec_odd.push_back(num);
            else
                vec_even.push_back(num);
        }
        int sz1=vec_odd.size();
        int sz2=vec_even.size();
        for(int i=0;i<sz1;i++)
            cout<<vec_odd[i]<<" ";
        for(int i=0;i<sz2;i++)
            cout<<vec_even[i]<<" ";
        cout<<endl;
    }
}
