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
        int n;
        cin>>n;
        int red[n];
        int cumulutive_red[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>red[i];
            if(i>0)
                cumulutive_red[i]=cumulutive_red[i-1];
            cumulutive_red[i]+=red[i];
        }
        int m;
        cin>>m;
        int blue[m];
        int cumulutive_blue[m]={0};
        for(int i=0;i<m;i++)
        {
            cin>>blue[i];
            if(i>0)
                cumulutive_blue[i]=cumulutive_blue[i-1];
            cumulutive_blue[i]+=blue[i];
        }
        int mx = 0;
        for(int i=0;i<n;i++)
        {
            int sum1 = cumulutive_red[i];
            for(int j=0;j<m;j++)
            {
                int sum2=cumulutive_blue[j];
                mx = max(mx,max(sum1,max(sum2,sum1+sum2)));
            }
        }
        cout<<mx<<endl;

    }
}
