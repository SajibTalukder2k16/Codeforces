#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        vector<int>ff,fe,tf,te;
        int len = s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='(')
                ff.push_back(i);
            else if(s[i]==')')
                fe.push_back(i);
            else if(s[i]=='[')
                tf.push_back(i);
            else
                te.push_back(i);
        }
        int cnt = 0;
        int sz1 = ff.size();
        int sz2 = fe.size();
        int sz3 = tf.size();
        int sz4 = te.size();
        //cout<<sz1<<" "<<sz2<<" "<<sz3<<" "<<sz4<<endl;
        for(int i=0,j=0;i<sz1 && j<sz2;i++)
        {
            while(fe[j]<ff[i])
            {
                if(j+1<sz2)
                    j++;
                else
                    break;
            }
            //cout<<"Size: "<<j<<endl;
            if(j<sz2 && fe[j]>ff[i])
                cnt++;
            j++;
        }
        for(int i=0,j=0;i<sz3 && j<sz4;i++)
        {
            while(te[j]<tf[i])
            {
                if(j+1<sz4)
                    j++;
                else
                    break;
            }
            //cout<<"J: "<<j<<endl;
            if(j<sz4 && te[j]>tf[i])
                cnt++;
            j++;
        }
        cout<<cnt<<endl;

    }
}
