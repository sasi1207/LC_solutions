class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxlen=0;
        for (int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                int g=0;
                string d=s.substr(i,j-i+1);
                map<char,int> freq;
                for(char h:d){
                    freq[h]++;
                    if(freq[h]>2){
                        g=1;
                        break;
                    }
                }
                if(g==1){
                    break;
                }
                maxlen=max(maxlen,j-i+1);
            }
        }
        return maxlen;
    }
};