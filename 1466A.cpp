#include<bits/stdc++.h>
#define fileRead freopen("input.txt","r",stdin);
#define fileWrite freopen("output.txt","w",stdout);
using namespace std;
double distance(int x1,int y1,int x2,int y2)
{
    double d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    return sqrt(d);
}
double triangle_area(int x2,int x3)
{
    int x1=0,y1=1;
    int y2=0,y3=0;
    double d1=distance(x1,y1,x2,y2);
    double d2=distance(x1,y1,x3,y3);
    double d3=distance(x2,y2,x3,y3);
    double s = (d1+d2+d3)/2;
    double area = sqrt(s*(s-d1)*(s-d2)*(s-d3));
    return area;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        int x=0,y=1;
        set<double>st;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                double area = triangle_area(ara[i],ara[j]);
                st.insert((double)((int)(area*10+.5))/10);
            }
        }
        cout<<st.size()<<endl;
    }
}
