class Solution {
public:
    string convert(string s, int numRows) {
        map<int,string> res;
        int g=1;
        int inc=1;
        for(int i=0;i<s.size();i++){
            if(g==1){
                res[g]+=s[i];
                g++;
                inc=1;
            }
            else if(g==numRows){
                res[g]+=s[i];
                g--;
                inc=0;
            }
            else if(inc==1){
                res[g]+=s[i];
                g++;
            }
            else if(inc==0){
                res[g]+=s[i];
                g--;
            }
        }
        string re="";
        for(int i=1;i<=numRows;i++){
            re+=res[i];
        }
        return re;
    }
};