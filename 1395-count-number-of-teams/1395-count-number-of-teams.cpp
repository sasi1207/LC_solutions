class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int h=0;
        vector<vector<int>> dp(6,vector<int> (n,0));
        for(int i=0;i<n;i++){
            dp[0][i]=1;
            dp[3][i]=1;
        }
        for(int l=1;l<=2;l++){
            for(int i=l;i<n;i++){
                dp[l][i]=0;
                dp[l+3][i]=0;
                for(int j=i-1;j>=0;j--){
                    if(rating[i]>rating[j]){
                        dp[l][i]+=dp[l-1][j];
                    }
                    else{
                        dp[l+3][i]+=dp[l+2][j];
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            h+=(dp[2][i]+dp[5][i]);
        }
        return h;
    }
};