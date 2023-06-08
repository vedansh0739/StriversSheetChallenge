#include <bits/stdc++.h>

    vector<vector<long long int>> printPascal(int n) {
  vector<vector<long long int>> a(n);
  a[0].push_back(1);
  for (long long i = 1; i < n; i++) {
    long long ans1=1;
    for (long long j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        a[i].push_back(1);
        continue;
      }
      ans1=ans1*(i-(j-1));
      ans1=ans1/j;
      a[i].push_back(ans1);
      
    }
  }
  return a;
}
