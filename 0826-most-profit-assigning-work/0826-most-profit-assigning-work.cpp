class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        sort(worker.begin(),worker.end());
        int n=difficulty.size();
        vector<pair<int,int>> prof_difi(n);
        for(int i=0;i<n;i++){
            prof_difi[i]={difficulty[i],profit[i]};
        }
        sort(prof_difi.begin(),prof_difi.end());
        for(int i=1;i<n;i++){
            prof_difi[i].second=max(prof_difi[i].second,prof_difi[i-1].second);
        }
        int indi=0;
        int res=0;
        for(int j=0;j<worker.size();j++){
            int prof=0;
            for(int k=0;k<n;k++){
                if(worker[j]>=prof_difi[k].first){
                    prof=prof_difi[k].second;
                }
                else{
                    break;
                }
            }
            res+=prof;
        }
        return res;
    }
};