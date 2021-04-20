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
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int num;
        bool chk=true;
        while(n--)
        {
            cin>>num;
            if(chk==true)
            {
                int val=sqrt(num);
                if(val*val!=num)
                    chk=false;
            }
        }
        if(chk==false)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
