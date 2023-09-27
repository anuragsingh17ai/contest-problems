#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,count=1;
        cin>>n;
        for(long long int i=0;i<n;i++)
        {
            cout<<count<<" ";
            count+=2;
        }
        cout<<endl;
    }
}