class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> mat;
        for(int i=0;i<m;i++){
            vector<int> col;
            for(int j=0;j<n;j++){
                col.push_back(matrix[j][i]);
            }
            mat.push_back(col);
        }
        return mat;
    }
};