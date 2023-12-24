class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=nums[0];
        if(target==nums[0]){
            return 0;
        }
        nums.erase(nums.begin());
        nums.push_back(start);
        int c=1;
        while(start!=nums[0]){
            if(nums[0]==target){
                return c;
            }
            int g=nums[0];
            nums.erase(nums.begin());
            nums.push_back(g);
            c++;
            
        }
        return -1;
    }
};