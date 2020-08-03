#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int no_of_digits;
        cin>>no_of_digits;
        int cut_digits = no_of_digits/4;
        vector<int>num;
        while(cut_digits--)
            num.push_back(8);
        int rem = no_of_digits%4;
        if(rem>=1)
            num.push_back(8);
        int taken_digits = no_of_digits/4 + (rem>0);
        int not_taken = no_of_digits-taken_digits;
        //while(not_taken--)
            //num.push_back(9);
        int sz = num.size();
        while(not_taken--)
            cout<<9;
        for(int i=sz-1;i>=0;i--)
            cout<<num[i];
        cout<<endl;
    }
}
