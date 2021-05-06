#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mx 5000001
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int temp_n=n;
        int cnt=0;
        int last_rem;
        while(temp_n)
        {
            last_rem=temp_n%10;
            temp_n/=10;
            cnt++;
        }
        ll sum=9*(cnt-1);
        sum+=last_rem-1;
        int num=0;
        for(int i=0;i<cnt;i++)
            num=num*10+last_rem;
        if(n>=num)
            sum++;
        //cout<<last_rem<<" "<<num<<" "<<cnt<<endl;
        cout<<sum<<endl;
    }
}
