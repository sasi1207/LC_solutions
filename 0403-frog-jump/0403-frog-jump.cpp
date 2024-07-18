class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        map<int,set<int>> dp;
        dp[0].insert(1);
        for(int i=0;i<n;i++){
            int curr=stones[i];
            set<int> jumps=dp[curr];
            for(int jump: jumps){
                int pos=curr+jump;
                if(pos==stones[n-1]){
                    return true;
                }
                if((find(stones.begin()+i+1,stones.end(),stones[i]+jump)-stones.begin())!=n){
                    if(jump-1>0){
                        dp[pos].insert(jump-1);
                    }
                    dp[pos].insert(jump);
                    dp[pos].insert(jump+1);
                }
            }
        }
        return false;
    }
};