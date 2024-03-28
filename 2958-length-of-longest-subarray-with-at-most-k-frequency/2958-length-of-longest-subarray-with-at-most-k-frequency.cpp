class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        if(nums.size()==1 and k==1){
            return 1;
        }
        else if(nums.size()==1 and k!=1){
            return 0;
        }
        map<int,int> res;
        int maxlen=0;
        int start=0,end=0;
        res[nums[0]]++;
        for(int i=1;i<nums.size();i++){
            res[nums[i]]++;
            if(res[nums[i]]>k){
                res[nums[i]]--;
                start++;
            }
            else{
                end++;
            }
            if(start==end){
                maxlen=max(maxlen,2);
            }
            else{
                maxlen=max(maxlen,end-start+1);
            }
        }
        return maxlen;
    }
};