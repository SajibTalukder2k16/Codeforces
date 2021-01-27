#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        int ara1[k],ara2[k];
        int cnt_ara1[a+1]={0},cnt_ara2[b+1]={0};
        for(int i=0;i<k;i++)
        {
            cin>>ara1[i];
            cnt_ara1[ara1[i]]++;
        }
        for(int i=0;i<k;i++)
        {
            cin>>ara2[i];
            cnt_ara2[ara2[i]]++;
        }
        ll sum = 0;
        for(int i=0;i<k;i++)
        {
            int a=ara1[i];
            int b=ara2[i];
            sum+=(k-1)-(cnt_ara1[a]-1)-(cnt_ara2[b]-1);
        }
        cout<<sum/2<<endl;;
    }
}
