class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> res(n+1);
        for(int i=0;i<n;i++){
            res[nums[i]]=1;
        }
        int g;
        for(int i=0;i<n+1;i++){
            if(res[i]!=1){
                return i;
            }
        }
        return -1;
    }
};