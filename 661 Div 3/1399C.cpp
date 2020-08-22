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
        vector<int>vec(n+1);
        int ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            ++vec[ara[i]];
        }
        int mx_cnt=0;
        for(int s=2;s<=2*n;s++)
        {
            int cnt=0;
            for(int i=1;i<(s+1)/2;i++)
            {
                if(s-i>n)
                    continue;
                cnt+=min(vec[i],vec[s-i]);
            }
            if(s%2==0)
                cnt+=vec[s/2]/2;
            mx_cnt=max(cnt,mx_cnt);
        }
        cout<<mx_cnt<<endl;

    }
}