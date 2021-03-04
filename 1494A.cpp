#include <bits/stdc++.h>
using namespace std;
string a,str;
int n;
int b, c;
string foo(char x,char y,char z)
{
    string ret="";
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A')
            ret+=x;
        else if(str[i]=='B')
            ret+=y;
        else
            ret+=z;
    }
    return ret;

}
bool check(string expr)
{
    stack<char>s;
    char x;
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(')
        {
            s.push(expr[i]);
            continue;
        }
        if (s.empty())
            return false;
        switch (expr[i]) {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        }
    }
    return (s.empty());
}
int main() {
    int test;
    cin>>test;
    while(test--)
    {
        cin >> str;
        n = str.size();
        vector<string>vec;
        vec.push_back(foo(')',')',')'));
        vec.push_back(foo(')',')','('));
        vec.push_back(foo(')','(',')'));
        vec.push_back(foo(')','(','('));
        vec.push_back(foo('(',')',')'));
        vec.push_back(foo('(',')','('));
        vec.push_back(foo('(','(',')'));
        vec.push_back(foo('(','(','('));
        bool test = false;
        for(int i=0;i<8;i++)
        {
            string a =vec[i];
            if(check(a))
            {
                test=true;
                break;
            }
        }
        if(test)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
