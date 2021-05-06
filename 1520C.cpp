#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 2000002
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(n==2)
        {
            cout<<-1<<endl;
        }
        else
        {
            bool chk=false;
            int val=1;
            for(int i=0;i<n;i++)
            {
                int temp=val;
                //if(chk==false)
                for(int j=0;j<n;j++)
                {
                    cout<<temp<<" ";
                    if(temp==n*n)
                    {
                        chk=true;
                        temp=0;
                    }
                    temp+=2;
                }
                cout<<endl;
                if(chk==true)
                    val=temp+2;
                if(n%2==0)
                {
                    if(i%2==0)
                        val+=n+1;
                    else
                        val+=n-1;
                }
                else
                {
                    val+=n;
                }

            }
        }
    }
}
