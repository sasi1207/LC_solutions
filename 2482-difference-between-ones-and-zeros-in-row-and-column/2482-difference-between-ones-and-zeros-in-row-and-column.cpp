class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>onerow(m);
        vector<int>onecol(n);
        vector<int>zerorow(m);
        vector<int>zerocol(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    zerorow[i]++;
                    zerocol[j]++;
                }
                if(grid[i][j]==1){
                    onerow[i]++;
                    onecol[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=onerow[i]+onecol[j]-zerorow[i]-zerocol[j];
            }
        }
        return grid;
    }
};