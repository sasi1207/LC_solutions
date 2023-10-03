class Solution {
public:
    int minMoves(vector<int>& nums) {
        int steps=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            steps+=nums[i]-nums[0];
        }
        return steps;
    }
};