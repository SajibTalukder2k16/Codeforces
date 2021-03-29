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
        string s;
        cin>>s;
        int i=s.find_first_of('*');
        int cnt=1;
        while(true)
        {
            int j=min(i+k,n-1);
            for(;j>i;j--)
                if(s[j]=='*')
                    break;
            if(i==j)
                break;
            cnt++;
            i=j;
        }
        cout<<cnt<<endl;
    }
}
