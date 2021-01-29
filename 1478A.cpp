#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
#define M 10000009
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
*/
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n];
        cin>>ara[0];
        int cnt=1;
        int cnt_max = 1;
        for(int i=1;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==ara[i-1])
                cnt++;
            else
                cnt=1;
            if(cnt>cnt_max)
                cnt_max=cnt;
        }
        cout<<cnt_max<<endl;
    }
}
