class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> tim;
        for(int i=0;i<dist.size();i++){
            tim.push_back((float)dist[i]/speed[i]);
        }
        sort(tim.begin(),tim.end());
        int ans=0;
        for(int i=0;i<tim.size();i++){
            if(tim[i]<=i){
                break;
            }
            ans++;
        }
        return ans;
    }
};