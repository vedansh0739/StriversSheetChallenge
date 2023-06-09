#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum=0,best=0;
  for (int i = 0; i < n; i++) {
      if(arr[i]+sum<=arr[i])sum=arr[i];
      else sum+=arr[i];
      best=max(best,sum);
  }
  return best;
}
