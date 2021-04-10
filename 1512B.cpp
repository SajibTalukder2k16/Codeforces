#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 1000001
int main()
{
    //fileWrite;
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        char grid[n+1][n+1];
        int pos1x,pos1y;
        int pos2x,pos2y;
        bool f=false;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>grid[i][j];
                if(grid[i][j]=='*')
                {


                    if(f==false)
                    {
                        f=true;
                        pos1x=i;
                        pos1y=j;
                    }
                    else
                    {
                        pos2x=i;
                        pos2y=j;
                    }
                }
            }
        }
        int pos3x,pos3y,pos4x,pos4y;
        if(pos1y==pos2y)
        {
            int dif=1;
            pos3x=pos1x;
            pos4x=pos2x;
            pos3y=pos1y+dif;
            pos4y=pos2y+dif;
            if(pos1y+dif>n||pos2y+dif>n)
            {
                pos3y=pos1y-dif;
                pos4y=pos2y-dif;
            }
        }
        else if(pos1x==pos2x)
        {
            int dif=1;
            pos3y=pos1y;
            pos3x=pos1x+dif;
            pos4x=pos2x+dif;
            pos4y=pos2y;
            if(pos1x+dif>n || pos2x+dif>n)
            {
                pos3x=pos1x-dif;
                pos4x=pos2x-dif;
            }
        }
        else
        {
            pos3x=pos2x;
            pos3y=pos1y;
            pos4x=pos1x;
            pos4y=pos2y;
        }
        grid[pos3x][pos3y]='*';
        grid[pos4x][pos4y]='*';
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
    }
}
