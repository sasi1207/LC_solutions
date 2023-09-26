class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int sum=0;
      for(int i=0;i<mat.size();i++){
        sum+=mat[i][i];
      }
      if(mat.size()==1){
        return sum;
      }
      int i=0,j=mat.size()-1;
      int n=mat.size();
      while(i<n and j>=0){
        if(i==j){
          sum+=0;
        }
        else{
          sum+=mat[i][j];
        }
        i++;
        j--;
      }
      return sum;
    }
};