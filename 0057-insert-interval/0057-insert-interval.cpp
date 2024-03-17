class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int indi=-1,jindi=-1;
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0]<=newInterval[0] and intervals[i][1]>=newInterval[0]){
                indi=i;
            }
            if(intervals[i][1]>=newInterval[1] and intervals[i][0]<=newInterval[1]){
                jindi=i;
            }

        }
        if(indi!=-1 and jindi!=-1){
            intervals[indi][0]=min(intervals[indi][0],newInterval[0]);
            intervals[indi][1]=max(intervals[jindi][1],newInterval[1]);
            for(int i=indi+1;i<=jindi;i++){
                intervals.erase(intervals.begin()+indi+1);
            }
            return intervals;
        }
        else if(indi!=-1 and jindi==-1){
            intervals[indi][0]=min(intervals[indi][0],newInterval[0]);
            intervals[indi][1]=max(intervals[indi][1],newInterval[1]);
        }
        else if(indi==-1 and jindi!=-1){
            intervals[jindi][0]=min(intervals[jindi][0],newInterval[0]);
            intervals[jindi][1]=max(intervals[jindi][1],newInterval[1]);
        }
        else{
            intervals.push_back(newInterval);
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> temp;
        for(int i=0;i<intervals.size();i++){
            if(temp.empty() or intervals[i][0]>temp.back()[1]){
                temp.push_back(intervals[i]);
            }
            else{
                temp.back()[1]=max(temp.back()[1],intervals[i][1]);
            }
        }
        return temp;
    }
};