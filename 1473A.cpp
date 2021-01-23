#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000
int marked[M/64 + 2];
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))
void sieve(int n) {
  for (int i = 3; i * i < n; i += 2) {
    if (!on(i)) {
      for (int j = i * i; j <= n; j += i + i) {
        mark(j);
      }
    }
  }
}

bool isPrime(int num) {
  return num > 1 && (num == 2 || ((num & 1) && !on(num)));
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,d;
        cin>>n>>d;
        int ara[n];
        bool all_ok = true;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            vec.push_back(ara[i]);
            if(ara[i]>d)
                all_ok=false;
        }
        if(all_ok==true)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(vec.begin(),vec.end());
        if(vec[0]+vec[1]<=d)
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}
