#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Comp {
  bool operator()(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    if (a.first != b.first) {
      return a.first < b.first;
    }
    return a.second > b.second;
  }

};
Comp comp_functor;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int A,B,n;
        cin>>A>>B>>n;
        int a[n];;
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<pair<int,int> > vec;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            vec.push_back(make_pair(a[i],b[i]));
        }
        ll damage = 0;
        for(int i=0;i<n;i++)
        {
            ll b_i = vec[i].second;
            ll a_i = vec[i].first;
            ll r = b_i/A;
            if(r*A!=b_i)
                r++;
            damage+=(r*a_i);
        }
        bool chk = true;
        for(int i=0;i<n;i++)
        {
            if(B-damage+a[i]>0)
            {
                cout<<"YES"<<endl;
                chk=false;
                break;
            }
        }
        if(chk==true)
            cout<<"NO"<<endl;
    }
}
