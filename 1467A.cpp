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
        if(n==1)
            cout<<9<<endl;
        else
        {
            cout<<"98";
            int num=9;
            for(int i=0;i<n-2;i++)
            {
                if(num>9)
                    num=0;
                cout<<num;
                num++;
            }
            cout<<endl;
        }
    }

}
