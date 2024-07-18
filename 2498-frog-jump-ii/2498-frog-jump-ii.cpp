class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n=stones.size();
        int maxi=INT_MIN;
        for(int i=2;i<n;i+=2){
            maxi=max(maxi,(stones[i]-stones[i-2]));
        }
        for(int i=n-2;i>=0;i--){
            if(i==n-2){
                maxi=max(maxi,(stones[i+1]-stones[i]));
            }
            else{
                maxi=max(maxi,(stones[i+2]-stones[i]));
            }
        }
        return maxi;
    }
};