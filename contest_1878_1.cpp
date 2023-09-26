#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ln,num,found=0;
        cin>>ln>>num;
        for(int i=0;i<ln;i++)
        {
            int temp;
            cin>>temp;
            if(temp==num)
                found=1;
                
        }
        if(found)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}