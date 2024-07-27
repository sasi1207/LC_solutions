class Solution {
public:
    int reverse(string h){
        int g=0;
        int j=h.size();
        for(int i=j-1;i>=0;i--){
            g*=10;
            g+=(int(h[i])-48);
        }
        return g;
    }
    int change(int num,vector<int>& mapping){
        string h="";
        if(num==0){
            h+=char(mapping[0]+48);
            return reverse(h);
        }
        while(num>0){
            h+=char(mapping[(num%10)]+48);
            num=num/10;
        }
        return reverse(h);
    }
    
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> pairs(n);
        vector<int> f(n);
        for(int i=0;i<nums.size();i++){
            pairs[i]={change(nums[i],mapping),i};
        }
        sort(pairs.begin(),pairs.end());
        for(int i=0;i<n;i++){
            f[i]=nums[pairs[i].second];
        }
        return f;
    }
};