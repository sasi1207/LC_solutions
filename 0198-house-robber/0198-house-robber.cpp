class Solution {
public:
    int rob(vector<int>& nums) {
        int s1=0;
        int s2=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                s1+=nums[i];
            }
            else{
                s2+=nums[i];
            }
        }
        return max(s1,s2);
    }
};