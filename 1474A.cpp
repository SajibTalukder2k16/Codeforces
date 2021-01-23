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
        string input;
        cin>>input;
        string output="";
        for(int i=0;i<n;i++)
        {
            int prev;
            if(i==0)
            {
                output+='1';
                prev=input[i]-48+1;
            }
            else
            {
                if(prev==2)
                {
                    if(input[i]=='1')
                    {
                        output+='0';
                    }
                    else
                    {
                        output+='1';
                    }
                    prev=1;
                }
                else if(prev==1)
                {
                    if(input[i]=='0')
                    {
                        output+='0';
                        prev=0;
                    }
                    else
                    {
                        output+='1';
                        prev=2;
                    }
                }
                else
                {
                    output+='1';
                    prev=input[i]-48+1;
                }
            }
        }
        cout<<output<<endl;
    }
}
