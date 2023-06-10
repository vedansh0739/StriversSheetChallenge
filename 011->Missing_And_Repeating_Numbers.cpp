#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	long long sum=0,sumsq=0,arrsum=0,arrsumsq=0;

	for(int i=0;i<n;i++){
		arrsum+=arr[i];
		arrsumsq+=(long long)((long long)arr[i])*((long long)arr[i]);

	}
	sum=((long long)((long long)n)*((long long)n+1))/2;
	sumsq=((long long)(n)*(n+1)*((2*n)+1))/6;
	long long ans1=arrsum-sum,ans2=arrsumsq-sumsq;
	long long extra,missing;
	ans2=ans2/ans1;
	extra=(ans1+ans2)/2;
	missing=extra-ans1;
	pair<int,int>pq;
        pq = {(int)missing,(int)extra};
		return pq;
}
