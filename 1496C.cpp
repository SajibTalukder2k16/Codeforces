#include<bits/stdc++.h>
using namespace std;
#define fastread     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
#define ll long long
#define mp make_pair
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int>miners,diamonds;
        int x,y;
        for(int i=0;i<2*n;i++)
        {
            cin>>x>>y;
            if(x==0)
                miners.push_back(abs(y-0));
            else if(y==0)
                diamonds.push_back(abs(x-0));
        }
        sort(miners.begin(),miners.end());
        sort(diamonds.begin(),diamonds.end());
        double sum=0;
        for(int i=0;i<n;i++)
        {
            double t=miners[i];
            double s=diamonds[i];
            double res = s*s + t*t;
            res= sqrt(res);
            sum+=res;
        }
        //cout<<sum<<endl;
        printf("%.10f\n",sum);
    }
}
