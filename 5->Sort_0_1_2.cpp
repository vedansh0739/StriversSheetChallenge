#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int one=0,two=0,zero=0;
   for(int i=0;i<n;i++){
      if(arr[i]==0)zero++;
      else if(arr[i]==1)one++;
      else two++;

   }
   int k=0;
   while(zero--){
      arr[k]=0;
      k++;
   }
   while(one--){
      arr[k]=1;
      k++;
   }
   while(two--){
      arr[k]=2;
      k++;
   }

   
}
