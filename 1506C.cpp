#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mx 100009
vector<string>vec_a,vec_b;
void printAllSubstringsA(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        char temp[n - i + 1];
        int tempindex = 0;
        for (int j = i; j < n; j++)
        {
            temp[tempindex++] = s[j];
            temp[tempindex] = '\0';
            vec_a.push_back(temp);
        }
    }
}
void printAllSubstringsB(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        char temp[n - i + 1];
        int tempindex = 0;
        for (int j = i; j < n; j++)
        {
            temp[tempindex++] = s[j];
            temp[tempindex] = '\0';
            vec_b.push_back(temp);
        }
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string a,b;
        cin>>a>>b;
        int len_a=a.length();
        int len_b=b.length();
        printAllSubstringsA(a,len_a);
        printAllSubstringsB(b,len_b);
        int sz1=vec_a.size();
        int sz2=vec_b.size();
        vector<int>vec;
        for(int i=0;i<sz1;i++)
        {
            int l1=vec_a[i].length();
            for(int j=0;j<sz2;j++)
            {
                int l2=vec_b[j].length();
                if(l1==l2)
                {
                    bool chk = true;
                    for(int p=0;p<l1;p++)
                    {
                        if(vec_a[i][p]!=vec_b[j][p])
                        {
                            chk=false;
                            break;
                        }
                    }
                    if(chk)
                        vec.push_back(len_a+len_b-2*l1);
                }
            }
        }
        if(vec.size()>0)
        {
            sort(vec.begin(),vec.end());
            cout<<vec[0]<<endl;
        }
        else
            cout<<len_a+len_b<<endl;
        vec_a.clear();
        vec_b.clear();
    }
}
