class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> sentenc;
        string local;
        string res="";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                sentenc.push_back(local);
                sentenc.push_back(" ");
                local="";
            }
            else{
                local+=sentence[i];
            }
        }
        sentenc.push_back(local);
        for(int i=0;i<sentenc.size();i++){
            string cde="";
            for(int j=0;j<sentenc[i].size();j++){
                cde+=sentenc[i][j];
                if(count(dictionary.begin(),dictionary.end(),cde)>0){
                    res+=cde;
                    if(cde==sentenc[i]){
                        cde="";
                    }
                    break;
                }
            }
            if(cde==sentenc[i]){
                res+=cde;
            }
        }
        return res;
    }
};