class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> res;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        }
        int l1=*max_element(nums.begin(),nums.end());
        for(int i=1;i<l1;i++){
            if(res[i]==0){
                return i;
            }
        }
        if(l1<0){
            return 1;
        }
        return l1+1;
    }
};