#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
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
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
                cnt++;
        }
        if(cnt==1)
        {
            cout<<"BOB"<<endl;
        }
        else if(cnt%2==0)
        {
            cout<<"BOB"<<endl;
        }
        else
            cout<<"ALICE"<<endl;
    }
}
