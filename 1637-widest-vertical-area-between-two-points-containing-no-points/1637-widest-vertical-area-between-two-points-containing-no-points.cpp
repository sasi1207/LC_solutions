class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int maxi=INT_MIN;
        for(int i=0;i<points.size()-1;i++){
            maxi=max((points[i+1][0]-points[i][0]),maxi);
        }
        return maxi;
    }
};