class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> temp;
        sort(intervals.begin(),intervals.end());
        for (int i=0;i<intervals.size();i++){
            if(temp.empty() || intervals[i][0] > temp.back()[1]){
                temp.push_back(intervals[i]);
            }
            else{
                temp.back()[1]=max(temp.back()[1],intervals[i][1]);
            }
        }
        return temp;
    }
};