#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<long long> v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back(a);
						}
		long long m=*min_element(v.begin(),v.end());
		long long s=0;
		for(int j=0;j<n;j++)
		{
			s+=(v[j]-m);
		}
		cout<<s<<"\n";
	}
}
