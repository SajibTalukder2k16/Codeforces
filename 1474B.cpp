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
    sieve(M);
    vector<int>primes;
    primes.push_back(2);
    for(int i=3;i<=M;i+=2)
        if(isPrime(i))
            primes.push_back(i);
    int sz = primes.size();
    int test;
    cin>>test;
    while(test--)
    {
        int d;
        cin>>d;
        bool f=false;
        int first,second;
        for(int i=0;i<sz;i++)
        {
            if(f==false)
            {
                if(primes[i]-1>=d)
                {
                    f=true;
                    first=primes[i];
                }
            }
            else
            {
                if(primes[i]-first>=d)
                {
                    second=primes[i];
                    break;
                }
            }
        }
        cout<<first*second<<endl;
    }
}
