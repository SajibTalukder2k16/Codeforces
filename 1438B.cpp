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
        int b_array[n];
        map<int,bool>mp;
        bool chk = false;
        for(int i=0;i<n;i++)
        {
            cin>>b_array[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(b_array[i]==b_array[j])
                {
                    chk=true;
                    break;
                }
            }
            if(chk==true)
                break;
        }
        if(chk==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
