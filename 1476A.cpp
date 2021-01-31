#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll n,k;
        cin>>n>>k;
        if(k>=n)
            cout<<(long long)ceil((k*1.0)/(n*1.0))<<endl;
        else
        {
            if(n%k==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
}
