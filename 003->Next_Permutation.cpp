#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    vector<int>nPerm=permutation;
    int i;
    int flag=0;
    for(i=n-2;i>=0;i--){
        if(nPerm[i]<nPerm[i+1]){
            flag=1;
            break;
        } 

    }
    if (flag == 0) {
      for (int i = 0; i < n; i++) {
          nPerm[i]=i+1;
      }
      return nPerm;
    }



    int l;
    for(l=n-1;l>i;l--){
        if(nPerm[l]>nPerm[i])break;
    }
    swap(nPerm[i],nPerm[l]);
    reverse(nPerm.begin()+i+1,nPerm.end());

    return nPerm;
}
