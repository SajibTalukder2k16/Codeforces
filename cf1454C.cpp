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
    //fileRead
    //fileWrite
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n];
        int count_num[n+1]={0};
        int count_pashapashi[n+1]={0};
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            count_num[ara[i]]++;
            count_pashapashi[ara[i]]++;
            if(i!=0)
            {
                if(ara[i]==ara[i-1])
                    count_pashapashi[ara[i]]--;
            }
        }
        int ans=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            //cout<<"Count: "<<count_num[i]<<endl;
            //cout<<"Pashapashi: "<<count_pashapashi[i]<<endl;
            if(count_num[i]==n)
            {
                ans=0;
                break;
            }
            else if(count_num[i]!=0)
            {
                if(count_pashapashi[i]==1 &&(ara[0]==i || ara[n-1]==i))
                    ans=1;
                else
                {
                    if(ara[0]==i && ara[n-1]==i)
                        ans=min(ans,count_pashapashi[i]-1);
                    else if(ara[0]==i || ara[n-1]==i)
                        ans=min(ans,count_pashapashi[i]);
                    else
                        ans=min(ans,count_pashapashi[i]+1);
                }
            }
        }
        cout<<ans<<endl;

    }
}
