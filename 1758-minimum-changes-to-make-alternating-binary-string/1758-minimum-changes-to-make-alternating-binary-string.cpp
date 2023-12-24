class Solution {
public:
    int minOperations(string s) {
        string s1=s;
        int c1=0;
        int c0=0;
        if(s[0]=='0'){
            s1[0]='1';
            c1++;
        }
        else{
            s1[0]='0';
            c0++;
        }
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                if(s[i]=='0' and s[0]=='0'){
                    s[i]='1';
                    c0++;
                }
                else if(s[i]=='1' and s[0]=='0'){
                    s[i]='0';
                    c0++;
                }
                else if(s[i]=='0' and s[0]=='1'){
                    s[i]='1';
                    c1++;
                }
                else{
                    s[i]='0';
                    c1++;
                }
            }
            if(s1[i-1]==s1[i]){
                if(s1[i]=='0' and s1[0]=='0'){
                    s1[i]='1';
                    c0++;
                }
                else if(s1[i]=='1' and s1[0]=='0'){
                    s1[i]='0';
                    c0++;
                }
                else if(s1[i]=='0' and s1[0]=='1'){
                    s1[i]='1';
                    c1++;
                }
                else{
                    s1[i]='0';
                    c1++;
                }
            }
        }
        return min(c1,c0);
    }
};