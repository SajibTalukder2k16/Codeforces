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
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.length();
        int l2=s2.length();
        int l = lcm(l1,l2);
        int n1=l/l1;
        string output1="",output2="";
        for(int i=0;i<n1;i++)
            output1+=s1;
        int n2=l/l2;
        for(int i=0;i<n2;i++)
            output2+=s2;
        if(output1==output2)
            cout<<output1<<endl;
        else
            cout<<-1<<endl;
    }
}
