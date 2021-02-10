#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll n,g,b;
        cin>>n>>g>>b;
        ll half = ((n+1)/2);
        ll q = half/g;
        ll total = q*(g+b);
        if(half%g!=0)
            total+=half%g;
        else
            total-=b;
        cout<<max(total,n)<<endl;
    }
}
