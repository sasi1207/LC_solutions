class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefi(n);
        prefi[0]=nums[0];
        int s=0;
        for(int i=1;i<n;i++){
            prefi[i]=prefi[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(prefi[i]%k==0){
                s++;
            }
            for(int j=i+1;j<n;j++){
                if(abs(prefi[i]-prefi[j])%k==0){
                    s++;
                }
            }
        }
        return s;
    }
};