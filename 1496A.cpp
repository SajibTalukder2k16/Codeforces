#include<bits/stdc++.h>
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
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int i=0,j=n-1;
        int cnt=0;
        bool chk = true;
        for(i=0,j=n-1;i<k;i++,j--)
        {
            if(str[i]==str[j])
                cnt++;
            else
            {
                chk=false;
                break;
            }
        }
        if(cnt==k && n>(k*2))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
