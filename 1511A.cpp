#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 200009
#define mod 1000000007
int main()
{
    //fileWrite

    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n];
        int up_vote=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==1 || ara[i]==3)
                up_vote++;
        }
        cout<<up_vote<<endl;
    }
}
