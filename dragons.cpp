#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n;
	cin>>s>>n;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	
	sort(v.begin(),v.end());
	for(auto i:v)
	{
		
		if(s-i.first<1)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		s+=i.second;
	}
	cout<<"YES"<<endl;
}
		
		
		
		
	
