#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,q;
		cin>>n>>q;
		int v[n];
		f(i,1,n+1)
			cin>>v[i];
		sort(v,v+n+1);
		
		while(q--)
		{
			long long x; cin>>x;
			int ans;
			ans=lower_bound(v,v+n+1,x)-v;
			ans>=n+1?cout<<-1<<endl:cout<<ans<<endl;
		}
	}
	return 0;
}
		
			
