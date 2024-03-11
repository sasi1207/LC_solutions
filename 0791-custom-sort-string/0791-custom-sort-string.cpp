class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> dfg;
        for(int i=0;i<s.size();i++){
            dfg[s[i]]++;
        }
        map<char,int>:: iterator it=dfg.begin();
        string res="";
        int n=order.size();
        for(int i=0;i<n;i++){
            res+=string(dfg[order[i]],order[i]);
            dfg[order[i]]=0;
        }
        while(it!=dfg.end()){
            if(it->second!=0){
                res+=string(it->second,it->first);
            }
            ++it;
        }
        return res;
    }
};