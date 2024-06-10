class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights.begin(),heights.end());
        sort(expected.begin(),expected.end());
        int s=0;
        for(int i=0;i<expected.size();i++){
            if(expected[i]!=heights[i]){
                s++;
            }
        }
        return s;
    }
};