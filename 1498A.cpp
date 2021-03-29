#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
int main()
{
    int ara[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167};
    int sz=*(&ara + 1) - ara;
    //cout<<sz<<endl;
    int test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        ll new_n = n;
        while(true)
        {
            ll temp=new_n;
            ll sum=0;
            while(temp)
            {
                sum+=temp%10;
                temp/=10;
            }
            bool chk = false;
            for(int i=0;i<sz;i++)
            {
                if(ara[i]>sum)
                    break;
                if(sum%ara[i]==0 && new_n%ara[i]==0)
                {
                    chk=true;
                    cout<<new_n<<endl;
                    break;
                }

            }
            if(chk)
                break;
            new_n++;
        }
    }
}
