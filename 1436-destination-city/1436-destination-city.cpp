class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> source;
        vector<string> dest;
        for(int i=0;i<paths.size();i++){
            source.push_back(paths[i][0]);
            dest.push_back(paths[i][1]);
        }
        for(string h:dest){
            if (find(source.begin(),source.end(),h) == source.end()){
                return h;
            }
        }
        return "";
    }
};