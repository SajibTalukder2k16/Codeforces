#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define lightoj_test_case_loop(test) for(int cs=1;cs<=test;cs++)
#define lightoj_output cout<<"Case "<<cs<<": "
#define pb push_back
#define mp make_pair
#define white 0
#define grey 1
#define black 2
#define ll long long
#define ii_pair pair<int,int>
int fx[]={+1,-1,0,0};
int fy[]={0,0,+1,-1};
int turnOn(int x,int pos) {
    return x | (1<<pos-1);
}
bool isOn(int N,int pos) {
    return (bool)(N & (1<<pos-1));
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0' && s[n-4]=='2')
        {
            cout<<"YES"<<endl;
        }
        else if(s[0]=='2' && s[1]=='0' && s[n-1]=='0' && s[n-2]=='2')
        {
            cout<<"YES"<<endl;
        }
        else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0' && s[0]=='2')
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
