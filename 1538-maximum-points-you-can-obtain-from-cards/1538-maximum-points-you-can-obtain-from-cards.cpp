class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        if(n==k){
            int sumofvector;
            sumofvector=accumulate(cardPoints.begin(),cardPoints.end(),0);
            return sumofvector;
        }
        int maxi=INT_MIN;
        int sum1=0;
        for(int i=0;i<k;i++){
            sum1+=cardPoints[i];
        }
        maxi=max(maxi,sum1);
        for(int i=0;i<k;i++){
            sum1-=cardPoints[k-1-i];
            sum1+=cardPoints[n-i-1];
            maxi=max(sum1,maxi);
        }
        return maxi;
    }
};