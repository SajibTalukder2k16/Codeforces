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
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    int g = gcd(a,b);
    return (a/g)*b;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int ara[n+1];
        int cnt = 1;
        for(int i=1;i<=k;i++,cnt++)
            ara[i]=i;
        for(int i=k-1;cnt<=n;i--,cnt++)
            ara[cnt]=i;
        int inversion_no = n-k;
        for(int i=1;i<=(k-(n-k))-1;i++)
            cout<<i<<" ";
        cnt = 1;
        for(int i=k;cnt<=n-k+1;i--,cnt++)
            cout<<i<<" ";
        cout<<endl;
    }
}
