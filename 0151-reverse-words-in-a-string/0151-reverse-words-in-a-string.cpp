class Solution {
public:
    string reverseWords(string s) {
        vector<string> dfe;
        int i=0,n=s.size();
        string h="";
        while(i<n){
            if(s[i]==' '){
                if(h!=""){
                    dfe.push_back(h);
                }
                h="";
            }
            else{
                h+=s[i];
            }
            i++;
        }
        dfe.push_back(h);
        h="";
        for(int l=dfe.size()-1;l>0;l--){
            if(dfe[l]!="" and dfe[l-1]!=""){
                h+=dfe[l]+" ";
            }
        }
        h+=dfe[0];
        return h;
    }
};