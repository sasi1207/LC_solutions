class Solution {
public:
    int countHomogenous(string s) {
        int res=0;
        int n=s.size();
        int in=0;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(i==0 or s[i-1]==s[i]){
                c++;
            }
            else{
                c=1;
            }
            in=in+c;
            in=in%(1000000000+7);
        }
        return in%(1000000000+7);
    }
};