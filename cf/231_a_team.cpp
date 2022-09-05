// Problem : https://codeforces.com/problemset/problem/231/A

/* 
Time Complexity : O(n)
Space Complexity : O(1)

 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int n = 3;
	int count = 0;
	while(t--)
	{
		int c=0;
		for(int i=1;i<=3;i++)
		{
			int s;
			cin>>s;
			if(s==1)
				c++;
		}
		if(c>=2)
			count++;
	}
	cout<<count<<endl;

	
}