class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int h=left.size();
        int ans=INT_MIN;
        for(int nu:left){
            ans=max(ans,nu);
        }
        for(int ni:right){
            ans=max(ans,n-ni);
        }
        return ans;
    }
};