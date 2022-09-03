// Problem : https://codeforces.com/contest/1715/problem/A

/* 
Time Complexity : O(1)
Time Complexity : O(1)
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,r;
		cin>>n>>m;
		if(n==1 && m==1){
			r=0;
		}
		else{
		r=n+m+(min(n,m))-2;
		}
		cout<<r<<endl;
	}
}