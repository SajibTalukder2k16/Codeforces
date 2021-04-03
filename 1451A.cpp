#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
int foo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 2;
    else
        return 1+foo(n-1);
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        cout<<foo(n)<<endl;
    }
}
