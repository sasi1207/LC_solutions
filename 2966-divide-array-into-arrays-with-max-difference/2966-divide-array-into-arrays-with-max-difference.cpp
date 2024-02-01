class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> res;
        int h=0;
        int i=2;
        while(i<n){
            if((nums[i]-nums[i-1]) > k or (nums[i]-nums[i-2])>k){
                h=0;
                break;
            }
            else{
                h=1;
            }
            i+=3;
        }
        if(h==0){
            return res;
        }
        auto it=nums.begin();
        while(it!=nums.end()){
            res.push_back({*it,*(it+1),*(it+2)});
            it=it+3;
        }
        return res;
    }
};