#include<bits/stdc++.h>
#define f(i,a,b) for(long long i=a;i<b;i++)
#define vi vector<long long>
using namespace std;
void solve()
{
	long long n;
	cin>>n;
	vi v(n);
	f(i,0,n) cin>>v[i];
	long long sum=0,r; cin>>r;
	f(i,0,r)
	{
		int ch; cin>>ch;
		sum+=ch;
	}
	cout<<v[sum%n]<<" ";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
