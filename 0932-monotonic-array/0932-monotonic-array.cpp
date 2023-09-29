class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> asc=nums;
        sort(asc.begin(),asc.end());
        vector<int> des=nums;
        sort(des.begin(),des.end(),greater<int>());
        if(asc==nums){
            return true;
        }
        else if(des==nums){
            return true;
        }
        return false;
    }
};