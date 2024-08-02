class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int> c(nums.size() + nums.size());
        copy(nums.begin(), nums.end(), c.begin());
        copy(nums.begin(), nums.end(), c.begin()+nums.size());
        int total=count(nums.begin(),nums.end(),1);
        int n = c.size();
        int start=0;
        int end = total;
        int zeros=count(nums.begin(),nums.begin()+end,0);
        int result=zeros;
        for(int i=1;i<=(n-total);i++){
            if(c[i-1]==0){
                zeros--;
            }
            if(c[i+total-1]==0){
                zeros++;
            }
            result=min(zeros,result);
        }
        return result;
    }
};