// Problem : https://codeforces.com/contest/1722/problem/B

/* 
Time Complexity: O(n)
Space Complexity : O(2n) -> O(n)

 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char r1[n],r2[n];
		for(int i=0;i<n;i++)
		{
			cin>>r1[i];
		}
		for(int i=0;i<n;i++)
		{

			cin>>r2[i];			
		}
		int i=0;
		for(;i<n;i++)
		{
			if(r1[i] !=r2[i] )
			{
				if((r1[i]=='B' || r1[i]=='G')&&(r2[i]=='B'||r2[i]=='G'))
				{
					continue;
				}
				else
				{
					cout<<"NO"<<endl;
					break;
				}
			}
		}
		if(i==n)
		cout<<"YES"<<endl;
	
	}
}