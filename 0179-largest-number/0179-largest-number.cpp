class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        string h="";
        vector<string> num(n);
        for(int i=0;i<n;i++){
            string j="";
            int g=nums[i];
            if(g>9){
                while(g>9){
                j=char((g%10)+48)+j;
                g=g/10;
                }
            }
            j=char((g%10)+48)+j;
            num[i]=j;
        }
        sort(num.begin(),num.end(),[] (string &s1,string &s2 ){return s2+s1>s1+s2;});
        for(int i=n-1;i>=0;i--){
            h+=num[i];
        }
        while(h[0]=='0' && h.size()>1){
            h=h.substr(1,h.size()-1);
        }
        return h;
    }
};