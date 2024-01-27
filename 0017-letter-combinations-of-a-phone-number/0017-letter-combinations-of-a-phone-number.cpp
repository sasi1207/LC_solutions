class Solution {
    
public:
    string dig[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> res(vector<string>& hel,string j){
        vector<string> z;
        for(string h:hel){
            for(char g:j ){
                z.push_back(h+g);
            }
        }
        return z;
    }
    vector<string> letterCombinations(string digi) {
        vector<string> result;
        result.push_back("");
        for(char f:digi){
            int g=f-'0';
            cout<<dig[g]<<endl;
            result=res(result,dig[g]);
        }
        if(result.size()==1){
            return {};
        }
        return result;
    }
};