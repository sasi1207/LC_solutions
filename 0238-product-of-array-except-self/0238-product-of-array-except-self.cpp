class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> n1(n);
        n1[0]=1;
        for(int i=1;i<n;i++){
            n1[i]=n1[i-1]*nums[i-1];
        }
        int right=1;
        for(int j = n-1;j>=0;j--){
            n1[j]*=right;
            right*=nums[j];
        }
        return n1;
    }
};