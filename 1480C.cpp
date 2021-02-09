#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"! "<<1<<endl;
        return 0;
    }
    int ara[n+2]={0};
    int mx = 100001;
    ara[0]=100001;
    ara[n+1]=100001;
    ll right = n;
    ll left = 1;
    ll mid;
    int mid_value,left_value,right_value;
    while(left!=right)
    {
        mid = (left+right)/2;
        if(ara[mid]==0)
        {
            cout<<"? "<<mid<<endl;
            cout.flush();
            cin>>mid_value;
            ara[mid]=mid_value;
        }
        if(ara[mid+1]==0)
        {
            cout<<"? "<<mid+1<<endl;
            cout.flush();
            cin>>right_value;
            ara[mid+1]=right_value;
        }
        mid_value=ara[mid];
        right_value=ara[mid+1];
        if(mid_value<right_value)
        {
            right=mid;
        }
        else
        {
            left=mid+1;
        }
    }
    mid=(left+right)/2;
    cout<<"! "<<mid<<endl;
    return 0;
}
