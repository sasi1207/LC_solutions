class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& ap) {
        if(ap.size()==1){
            return ap[0];
        }
        map<int,int> res;
        map<int,vector<int>> vals;
        int n=ap.size()+1;
        int firs;
        vector<int> dest;
        int pushed=0;
        for(int i=0;i<ap.size();i++){
            res[ap[i][0]]++;
            vals[ap[i][0]].push_back(ap[i][1]);
            res[ap[i][1]]++;
            vals[ap[i][1]].push_back(ap[i][0]);
        }
        map<int,int> :: iterator it=res.begin();
        while(it!=res.end()){
            if(it->second==1){
                firs=it->first;
                break;
            }
            ++it;
        }
        dest.push_back(firs);
        pushed++;
        int prev=firs;
        int sec=vals[firs][0];
        dest.push_back(sec);
        pushed++;
        int curr=sec;
        while(pushed<n){
            if(prev==vals[curr][0]){
                int gh=vals[curr][1];
                dest.push_back(gh);
                prev=curr;
                curr=gh;
                pushed++;
            }
            else if(prev==vals[curr][1]){
                int gh=vals[curr][0];
                dest.push_back(gh);
                prev=curr;
                curr=gh;
                pushed++;
            }
        }
        return dest;
    }
};