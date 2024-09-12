class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0;
        map<char,int> df;
        for(int i=0;i<allowed.size();i++){
            df[allowed[i]]++;
        }
        int j=0;
        int n=words.size();
        while(j<n){
            set<char> s(words[j].begin(),words[j].end());
            for (auto it = s.begin(); it != s.end(); ++it){
                if(df.find(*it)==df.end()){
                    break;
                }
                if(*it==*(s.rbegin()) && df.find(*it)!=df.end()){
                    c++;
                }
            }
            j++;
        }
        return c;
    }
};