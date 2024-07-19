class Solution {
public:
    int robbing(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int n=nums.size();
        vector<int> dp(n+1,0);
        dp[1]=nums[0];
        for(int i=2;i<=n;i++){
            dp[i]=max(dp[(i-1)],(dp[(i-2)]+nums[(i-1)]));
        }
        return dp[n];
    }
    int rob(vector<int>& nums){
        if(nums.size()==0){
            return 0;
        }
        else if(nums.size()<=2){
            return *max_element(nums.begin(),nums.end());
        }
       vector<int> nums1=nums;
       nums1.erase(nums1.begin());
       nums.erase(nums.end());
       return max(robbing(nums1),robbing(nums));
    }
};