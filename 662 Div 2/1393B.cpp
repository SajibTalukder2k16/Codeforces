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
#define mx 100009
int main()
{
    //fileRead
    //fileWrite
    int n;
    cin>>n;
    int num;
    int value[mx]={0};
    int cnt_twos=0,cnt_fours=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        int x=value[num];
        value[num]++;
        if(value[num]==2)
            cnt_twos++;
        else if(value[num]==4)
        {
            cnt_fours++;
            cnt_twos--;
        }
        else if(value[num]>4)
        {
            int temp = value[num]-4;
            if(temp==4)
            {
                cnt_fours++;
                cnt_twos--;
            }
            else if(temp==2)
                cnt_twos++;
        }

    }
    cin>>n;
    int q;
    char ch;
    for(int i=0;i<n;i++)
    {
        getchar();
        cin>>ch;
        cin>>q;
        if(ch=='+')
        {
            value[q]++;
            if(value[q]==2)
                cnt_twos++;
            else if(value[q]==4)
            {
                cnt_fours++;
                cnt_twos--;
            }
            else if(value[q]>=4)
            {
                int temp = value[q]-4;
                if(temp==4)
                {
                    cnt_fours++;
                    cnt_twos--;
                }
                else if(temp==2)
                    cnt_twos++;
            }
        }
        else if(ch=='-')
        {
            value[q]--;
            if(value[q]==3)
            {
                cnt_fours--;
                cnt_twos++;
            }
            else if(value[q]==1)
            {
                cnt_twos--;
            }
            else if(value[q]==5)
            {
                cnt_twos--;
            }
            else if(value[q]==7)
            {
                cnt_fours--;
                cnt_twos++;
            }
        }
        //cout<<i+1<<"   "<<cnt_fours<<" "<<cnt_twos<<endl;
        if((cnt_fours>=1 && cnt_twos>=2)||(cnt_fours>=2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}