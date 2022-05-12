#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define vii vector<vector<int>>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		int n,m;cin>>n>>m;
		int v[n][m];
		f(i,0,n)
		{
			f(j,0,m)
			{
				cin>>v[i][j];
			}
		}	
		int ans=INT_MIN;	
		f(i,0,n)
			f(j,0,m)
			{
				int sum=0;
				f(k,0,n)
					f(l,0,m)
					{
						if(i+j==k+l)
							sum+=v[k][l];
						else if(((i-j)==(k-l))&&(i!=k)&&(j!=l))
							sum+=v[k][l];
					}
				ans=max(ans,sum);
				}
			cout<<ans<<endl;
		}
		return 0;
}
						
		
		
