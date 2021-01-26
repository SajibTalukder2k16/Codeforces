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
        int n;
        cin>>n;
        bool chk = false;
        for(int i=0;i<500 && i*2020<=n;i++)
        {
            for(int j=0;j<500 && (i*2020 + j*2021<=n);j++)
            {
                int value = i*2020 + j*2021;
                if(value==n)
                {
                    chk=true;
                    break;
                }
            }
            if(chk==true)
                break;
        }
        if(chk==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
