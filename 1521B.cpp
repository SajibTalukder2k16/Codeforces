#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
#define M 100000000
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
    //int x=1500000;
    //sieve(x);
    //vector<int>primes;
    //primes.push_back(2);
    //for(int i=3;i<=x;i+=2)
        //if(isPrime(i))
           // primes.push_back(i);
    int x=1005244957;
    int y=1000000007;
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        cout<<n-1<<endl;
        for(int i=0;i<n-1;i++)
        {
            int mn=min(ara[i],ara[n-1]);
            int temp_i=ara[i];
            int temp_n=ara[n-1];
            ara[n-1]=mn;
            if(i%2==0)
                ara[i]=x;
            else
                ara[i]=y;
            cout<<i+1<<" "<<n<<" "<<ara[i]<<" "<<mn<<endl;
            //cout<<ara[i]<<" ";
            //int p=upper_bound(primes.begin(),primes.end(),mn)-primes.begin();
            //cout<<primes[p]<<endl;
        }
        //cout<<ara[n-1]<<endl;

    }
    //cout<<primes.size();
}
