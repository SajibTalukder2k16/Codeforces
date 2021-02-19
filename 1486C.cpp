#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
int foo(int left,int right,int prev)
{
    if(right-left==1)
    {
        if(prev==left)
            return right;
        else
            return left;
    }
    int mid = (left+right)/2;
    int pos;
    if(left<=prev && prev<=mid)
    {
        if(left==mid)
            mid++;
        cout<<"? "<<left<<" "<<mid<<endl;
        cout.flush();
        cin>>pos;
        if(pos==prev)
            return foo(left,mid,pos);
        else
        {
            if(mid+1==right)
                mid--;
            cout<<"? "<<mid+1<<" "<<right<<endl;
            cout.flush();
            cin>>pos;
            return foo(mid+1,right,pos);
        }
    }
    else
    {
        if(mid+1==right)
            mid--;
        cout<<"? "<<mid+1<<" "<<right<<endl;
        cout.flush();
        cin>>pos;
        if(pos==prev)
        {
            return foo(mid+1,right,pos);
        }
        else
        {
            if(left==mid)
                mid++;
            cout<<"? "<<left<<" "<<mid<<endl;
            cout.flush();
            cin>>pos;
            return foo(left,mid,pos);
        }
    }

}
int main()
{
    int n;
    cin>>n;
    int left=1,right=n,pos;
    cout<<"? "<<left<<" "<<right<<endl;
    cout.flush();
    cin>>pos;
    int ans = foo(left,right,pos);
    cout<<"! "<<ans<<endl;
}
