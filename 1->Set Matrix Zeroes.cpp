class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
int m=matrix.size();
int n=matrix[0].size();
vector<pair<int,int>>Zeroes;
for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
    if (matrix[i][j] == 0) {
		Zeroes.push_back(make_pair(i,j));
	}
  }
}
for(int i=0;i<Zeroes.size();i++){
	for(int k1=0;k1<n;k1++){
		matrix[Zeroes[i].first][k1]=0;

	}
	for(int k1=0;k1<m;k1++){
		matrix[k1][Zeroes[i].second]=0;
	}
}
return;


    }
};
