#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[(n+1)];
        int check[2*(n+1)]={0};
        //cout<<endl;
        vector<int>vec;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            //cout<<"Count: "<<ara[i]<<" "<<check[ara[i]]<<endl;
            if(check[ara[i]]==0)
                vec.push_back(ara[i]);
            check[ara[i]]++;
        }
        int sz = vec.size();
        cnt =sz;
        //cout<<"Size: "<<cnt<<endl;
        for(int i=sz-1;i>=0;i--)
        {
            if(check[vec[i]+1]==0)
            {
                check[vec[i]+1]=1;
                check[vec[i]]--;
                if(check[vec[i]]!=0)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
