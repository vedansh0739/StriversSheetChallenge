#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> arr1, vector<int> arr2, int m, int n) {
	int j;
	for(int i=0;i<arr1.size();i++){
          if (arr1[i] == 0) {
			  arr1[i]=1e7;
		  }
        }
	for(int i=arr1.size()-1;i>=0;i--){
		j=arr1.size()-i-1;
		if(j>=n)break;
		if(arr1[i]>arr2[j])swap(arr1[i],arr2[j]);
	}
	sort(arr1.begin(),arr1.end());

	return arr1;
}
