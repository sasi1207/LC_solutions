class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int h=0,i=0,n=s.size();
        string d="";
        while(i<n){
            if(d.find(s[i])==-1){
                d+=s[i];
                int f=d.size();
                h=max(h,f);
            }
            else{
                int g=d.find(s[i]);
                d=d.substr(g+1);
                d+=s[i];
            }
            i++;
        }
        return h;
    }
};