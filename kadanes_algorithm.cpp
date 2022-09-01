#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long sum = 0;
	long long max_so_far = LLONG_MIN;
	for(long i=0; i<n; i++){
		sum += a[i];
		max_so_far = max(max_so_far,sum);
		if(sum<0){
			sum = 0;
		}
	}
	cout<<max_so_far<<endl;
	return 0;
}