class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int p1=0,n=nums.size(),maxlen=0;
        map<int,int> res;
        res[0]=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                p1-=1;
            }
            else{
                p1+=1;
            }
            if(res.find(p1)!=res.end()){
                maxlen=max(maxlen,i-(res.find(p1)->second));
            }
            else{
                res[p1]=i;
            }
        }
        return maxlen;
    }
};