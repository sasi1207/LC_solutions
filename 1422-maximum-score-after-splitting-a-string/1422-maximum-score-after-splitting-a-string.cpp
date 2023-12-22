class Solution {
public:
    int maxScore(string s) {
        int maxi1=count(s.begin(),s.end(),'1'),ans=0,maxi0=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1'){
                maxi1--;
            }
            else{
                maxi0++;
            }
            ans=max(ans,(maxi0+maxi1));
        }
        return ans;
    }
};