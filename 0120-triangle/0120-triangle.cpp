class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int g=triangle.size();
        int h=triangle[g-1].size();
        vector<vector<int>> dp(h,vector<int> (h,INT_MAX));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<h;i++){
            for(int j=0;j<=i;j++){
                if(j-1 >= 0 && dp[i-1][j]!=INT_MAX){
                    dp[i][j]=min((dp[i-1][j-1]+triangle[i][j]),(dp[i-1][j]+triangle[i][j]));
                }
                else if( j-1 < 0){
                    dp[i][j]=(triangle[i][j]+dp[i-1][j]);
                }
                else if( dp[i-1][j]==INT_MAX){
                    dp[i][j]=(triangle[i][j]+dp[i-1][j-1]);
                }
            }
        }
        return *min_element(dp[g-1].begin(),dp[g-1].end());
    }
};