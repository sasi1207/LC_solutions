class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(s[i]==s[j] and i<j){
            char c=s[i];
            while(s[i]==c and i<=j){
                i++;
            }
            while(s[j]==c and i<=j){
                j--;
            }
        }
        return j-i+1;
    }
};