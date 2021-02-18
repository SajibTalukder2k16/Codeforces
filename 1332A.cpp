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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        //cout<<"HEllo"<<endl;
        int rl_mx = abs(a-b);
        int ud_mx = abs(c-d);
        bool chk = true;
        int dif_with_left = abs(x-x1);
        int dif_with_right = abs(x-x2);
        int dif_with_down = abs(y-y1);
        int dif_with_up = abs(y-y2);
        //cout<<"Hello 2"<<endl;
        if(a==b && a!=0)
        {
            if(!(dif_with_left>0 || dif_with_right>0))
                chk=false;
        }
        else if(a>b)
        {
            if(dif_with_left<rl_mx)
                chk=false;
        }
        else
        {
            if(dif_with_right<rl_mx)
                chk = false;
        }
        if(c==d && c!=0)
        {
            if(!(dif_with_up>0 || dif_with_down>0))
                chk = false;
        }
        else if(c>d)
        {
            if(dif_with_down<ud_mx)
                chk = false;
        }
        else
        {
            if(dif_with_up<ud_mx)
                chk = false;
        }
        //cout<<chk<<endl;
        if(chk==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
