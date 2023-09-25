class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> red;
        if(n<2){
            return nums;
        }
        if(n==2){
            if(nums[0]+nums[1]==(2*nums[0])){
                nums.erase(nums.begin());
                return nums;
            }
            return nums;
        }
        set<int> res(nums.begin(),nums.end());
        for(auto i : res){
            if((n/3)<(count(nums.begin(),nums.end(),i))){
                red.push_back(i);
            }
        }
        return red;
    }
};