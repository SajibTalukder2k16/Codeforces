#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
char grid[4][4];
int check(char ch)
{
    int cnt=0;
    for(int i=1;i<=3;i++)
    {
        bool chk=true;
        for(int j=1;j<3;j++)
        {
            if(grid[i][j]!=ch || grid[i][j+1]!=ch)
            {
                //cout<<i<<endl;
                chk=false;
            }
        }
        if(chk==true)
            cnt++;
    }
    //cout<<"X "<<cnt<<endl;
    for(int j=1;j<=3;j++)
    {
        bool chk=true;
        for(int i=1;i<3;i++)
        {
            if(grid[i][j]!=ch ||grid[i+1][j]!=ch)
                chk=false;
        }
        if(chk==true)
            cnt++;
    }
    //cout<<"Y "<<cnt<<endl;
    if(grid[1][1]==grid[2][2] && grid[2][2]==grid[3][3] && grid[2][2]==ch)
        cnt++;
    //cout<<"D1 "<<cnt<<endl;
    if(grid[1][3]==grid[2][2] && grid[2][2]==grid[3][1] && grid[2][2]==ch)
        cnt++;
    return cnt;
}
int main()
{
    int cnt_x=0;
    int cnt_0=0;
    for(int i=1;i<=3;i++)
        for(int j=1;j<=3;j++)
        {
            cin>>grid[i][j];
            //cout<<i<<" "<<j<<endl;
            if(grid[i][j]=='X')
                cnt_x++;
            else if(grid[i][j]=='0')
                cnt_0++;
        }
    int out_x=check('X');
    int out_0=check('0');
    //cout<<out_x<<" "<<out_0<<endl;
    if(cnt_x-cnt_0>1 || cnt_0>cnt_x)
    {
        cout<<"illegal"<<endl;
    }
    else if(out_x && out_0)
    {
        cout<<"illegal"<<endl;
    }
    else if(out_x)
    {
        if(cnt_x>cnt_0)
            cout<<"the first player won"<<endl;
        else
            cout<<"illegal"<<endl;
    }
    else if(out_0)
    {
        if(cnt_0==cnt_x)
            cout<<"the second player won"<<endl;
        else
            cout<<"illegal"<<endl;
    }
    else if(cnt_0==cnt_x)
        cout<<"first"<<endl;
    else if(cnt_0+cnt_x==9)
        cout<<"draw"<<endl;
    else
        cout<<"second"<<endl;
}
