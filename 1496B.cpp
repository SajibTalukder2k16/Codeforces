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
        int n,k;
        cin>>n>>k;
        int ara[n];
        set<int>st;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            st.insert(ara[i]);
        }
        int distinct_element = st.size();
        if(k==0)
        {
            cout<<distinct_element<<endl;
            continue;
        }
        set<int>::iterator it;
        vector<int>vec;
        for(it=st.begin();it!=st.end();it++)
            vec.push_back(*it);
        sort(vec.begin(),vec.end());
        int mx_value=vec[n-1];
        int mex_value=-1;
        int sz = vec.size();
        for(int i=0;i<sz;i++)
            if(i!=vec[i])
            {
                mex_value=i;
                break;
            }
        if(mex_value==-1)
        {
            mex_value=mx_value+1;
            cout<<distinct_element+k<<endl;
        }
        else
        {
            int temp = mex_value+mx_value;
            int x=temp/2;
            if(temp&1)
                x++;
            int add = 1;
            for(int i=0;i<sz;i++)
                if(vec[i]==x)
                {
                    add=0;
                    break;
                }
            distinct_element+=add;
            cout<<distinct_element<<endl;
        }

    }

}
