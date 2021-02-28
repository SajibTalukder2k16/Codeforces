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
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
            if(str[i]=='g')
                cout<<'g';
        for(int i=0;i<n;i++)
            if(str[i]!='g')
                cout<<str[i];
        cout<<endl;
    }
}
