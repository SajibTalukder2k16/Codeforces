#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string str;
        cin>>str;
        int len=str.length();
        if(len&1)
            len++;
        len/=2;
        int pos=-1;
        for(int i=0,j=str.length()-1;i<len;i++,j--)
        {
            if(str[j]!='a')
            {
                pos=i;
                break;
            }
            if(str[i]!='a')
            {
                pos=j;
                break;
            }
        }
        if(pos==-1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        //cout<<pos<<endl;
        cout<<"YES"<<endl;
        len=str.length();
        for(int i=0;i<len;i++)
        {
            if(i==pos)
                cout<<'a';
            cout<<str[i];
        }
        cout<<endl;
    }

}
