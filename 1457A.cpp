#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        int x=max(abs(n-r),abs(1-r));
        int y=max(abs(m-c),abs(1-c));
        cout<<x+y<<endl;
    }
}
