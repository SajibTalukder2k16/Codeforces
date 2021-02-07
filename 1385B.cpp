#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        bool chk[n+1]={false};
        int num;
        for(int i=0;i<2*n;i++)
        {
            cin>>num;
            if(chk[num]==false)
            {
                cout<<num<<" ";
                chk[num]=true;
            }
        }
        cout<<endl;
    }
}
