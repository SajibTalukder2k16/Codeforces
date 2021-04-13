#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 200009
#define mod 1000000007
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(c==1)
        {
            int x=2;
            int y=2;
            int cnt_len_a=1;
            int cnt_len_b=1;
            while(cnt_len_a<a)
            {
                x*=5;
                int temp_x=x;
                cnt_len_a=0;
                while(temp_x)
                {
                    cnt_len_a++;
                    temp_x/=10;
                }
            }
            while(cnt_len_b<b)
            {
                y*=7;
                int temp_y=y;
                cnt_len_b=0;
                while(temp_y)
                {
                    cnt_len_b++;
                    temp_y/=10;
                }
            }
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            int com=1;
            int chk=c-1;
            int cnt=1;
            while(chk)
            {
                com*=11;
                chk--;
                cnt++;
            }
            int x=com;
            int y=com;
            int cnt_len_a=cnt;
            int cnt_len_b=cnt;
            while(cnt_len_a<a)
            {
                x*=5;
                int temp_x=x;
                cnt_len_a=0;
                while(temp_x)
                {
                    cnt_len_a++;
                    temp_x/=10;
                }
            }
            while(cnt_len_b<b)
            {
                y*=7;
                int temp_y=y;
                cnt_len_b=0;
                while(temp_y)
                {
                    cnt_len_b++;
                    temp_y/=10;
                }
            }
            cout<<x<<" "<<y<<endl;

        }
    }
}
