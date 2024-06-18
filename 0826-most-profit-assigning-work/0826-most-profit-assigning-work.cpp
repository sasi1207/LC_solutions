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
        int index=0;
        int res=0;
        int prof=0;
        for(int j=0;j<worker.size();j++){
            while(index<n && worker[j]>=prof_difi[index].first){
                prof=max(prof,prof_difi[index].second);
                index++;
            }
            //cout<<prof<<" "<<worker[j]<<" index "<<index<<" "<<prof_difi[last].first<<endl;
            res+=prof;
        }
        return res;
    }
};