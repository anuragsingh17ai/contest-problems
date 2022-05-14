#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const int N=2e5+5;
int s[N]; 
int cmp(int x,int y)
{
	return x>y;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int v[n];
		f(i,1,n+1)
			cin>>v[i];
		sort(v,v+n+1,cmp);
		
		f(i,1,n+1) s[i]=s[i-1]+v[i];
		
		
		while(q--)
		{
			int x; cin>>x;
			int ans;
			ans=lower_bound(s,s+n+1,x)-s;
			ans>=n+1?cout<<-1<<endl:cout<<ans<<endl;
		}
	}
	return 0;
}
		
			
			
