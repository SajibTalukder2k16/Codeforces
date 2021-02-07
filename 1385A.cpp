#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int mx=max(x,max(y,z));
        if((x==mx && mx==y) || (mx==y && mx==z) || (mx==x && mx==z))
        {
            cout<<"YES"<<endl;
            cout<<mx<<" ";
            bool f=false;
            bool s=false;
            bool t=false;
            if(x==mx)
                f=true;
            if(y==mx)
                s=true;
            if(z==mx)
                t=true;
            if(f&&s&&t)
            {
                cout<<x<<" "<<x<<endl;
            }
            else
            {
                if(f==false)
                    cout<<x<<" "<<x<<endl;
                else if(s==false)
                    cout<<y<<" "<<y<<endl;
                else
                    cout<<z<<" "<<z<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
