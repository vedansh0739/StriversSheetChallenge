#include <bits/stdc++.h>

void ro(vector<vector<int>> &mat,int startRow,int startCol, int endRow, int endCol){
    if(startRow>=endRow-1||startCol>=endCol-1){
        return;
    }
    int prev=mat[startRow+1][startCol];
    for(int i=startCol;i<endCol;i++){
        
        int inter=mat[startRow][i];
        mat[startRow][i]=prev;
        prev=inter;
    }
    startRow++;
    
    for(int i=startRow;i<endRow;i++){
        int inter=mat[i][endCol];
        mat[i][startCol]=prev;
        prev=inter;
    }
    endCol--;
    if(startRow<=endRow)
    {
      for (int i = endCol-1; i >= startCol; i--) {
        int inter = mat[endRow-1][i];
        mat[endRow-1][i] = prev;
        prev = inter;
      }
      endRow--;
    }
    
    if(startCol<=endCol){
      for (int i = endRow-1; i >= startRow; i--) {
        int inter = mat[i][startCol];
        mat[i][startCol] = prev;
        prev = inter;
      }
      startCol++;
    }
    ro(mat,startRow,startCol,endRow,endCol);


}




void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{

    ro(mat,0,0,n,m);

}
