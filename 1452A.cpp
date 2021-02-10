#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y;
        cin>>x>>y;
        int sum = x+y;
        if(abs(x-y)<=1)
            cout<<sum<<endl;
        else
            cout<<(ll)(sum+(abs(x-y)-1))<<endl;
    }
}
