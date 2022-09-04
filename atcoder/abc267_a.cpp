// Problem A Saturday
// URL : https://atcoder.jp/contests/abc267/tasks/abc267_a

#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<string> S = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday"};
	string d;
	cin>>d;
	auto it = find(S.begin(),S.end(),d);
	cout<<distance(it,S.end())-1<<endl;			
}