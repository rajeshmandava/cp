// Problem : https://codeforces.com/contest/1717/problem/A

/* 
Couldn't solve in Codeforces Round 818 Div 2
Used a brute force method with two for loops and gcd and lcd functions.

In Upsolving questions of the contest, learnt

LCM * GCD = a*b

Given condition : 
LCM(a,b)/GCD(a,b) <= 3

From above two equations we can derive the number of possibile (a,b) which satisfies condition in the problem

n + n/2 + n/2 + n/3 + n/3

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
 		cout<<n+n/2+n/2+n/3+n/3<<endl;	
	}
}