bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m=mat.size(),n=mat[0].size();
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        if(mat[i][j]==target)return 1;
    }
  }
  return 0;
}
