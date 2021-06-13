#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define mod 1000000007
#define pi 3.141593
#define pb push_back
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<string>prefix,suffix;
        string temp="";
        for(int i=0;i<n;i++)
        {
            temp+=str[i];
            prefix.pb(temp);
        }
        temp="";
        for(int i=n-1;i>=0;i--)
        {
            temp=str[i]+temp;
            suffix.pb(temp);
        }
        vector<string>strings;
        map<string,int>mp_si;
        strings.pb(str);
        mp_si[str]=1;
        for(int i=n-2,j=0;i>0;i--,j++)
        {
            //cout<<i<<endl;
            int val=suffix[i].length();
            if(val&1)
                reverse(prefix[j].begin(),prefix[j].end());
            string output=suffix[i]+prefix[j];
            strings.pb(output);
            if(mp_si[output]==0)
                mp_si[output]=n-i;
            //cout<<suffix[i]<<" "<<prefix[j]<<" "<<output<<" "<<n-i<<endl;
        }
        reverse(str.begin(),str.end());
        strings.pb(str);
        if(mp_si[str]==0)
            mp_si[str]=n;
        sort(strings.begin(),strings.end());
        cout<<strings[0]<<endl;
        cout<<mp_si[strings[0]]<<endl;
    }
}
