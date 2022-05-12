#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<string> v(n);
		
		f(i,0,n)
		{
			cin>>v[i];
		}
		
		int ans=INT_MAX;
		f(i,0,n)
			f(j,i+1,n)
			{
				int dif=0;
				f(k,0,m)
					dif+=abs(v[i][k]-v[j][k]);
				ans=min(ans,dif);
			}
		cout<<ans<<endl;
	}
	return 0;
}
