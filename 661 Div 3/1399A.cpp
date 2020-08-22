#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        int ara;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            cin>>ara;
            vec.push_back(ara);
        }
        sort(vec.begin(),vec.end());
        bool check = true;
        for(int i=1;i<n;i++)
        {
            if(vec[i]-vec[i-1]>1)
            {
                check = false;
                break;
            }
        }
        if(check==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}