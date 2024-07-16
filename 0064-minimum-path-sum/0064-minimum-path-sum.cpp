class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,40001));
        dp[0][0]=grid[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i+1)<n){
                    int g=grid[i+1][j]+dp[i][j];
                    if(g<dp[i+1][j]){
                        dp[i+1][j]=g;
                    }
                }
                if((j+1)<m){
                    int g=grid[i][j+1]+dp[i][j];
                    if(g<dp[i][j+1]){
                        dp[i][j+1]=g;
                    }

                }
            }
        }
        return dp[n-1][m-1];
    }
};