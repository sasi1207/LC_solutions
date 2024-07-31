class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int n=flips.size();
        int c=0;
        string h="",st="";
        string str(n,'0');
        for(int i=0;i<n;i++){
            if(str[flips[i]-1]=='1'){
                str[flips[i]-1]='0';
                if(flips[i]-1 < st.size()){
                    st[flips[i]-1]='0';
                }
                

            }
            else{
                str[flips[i]-1]='1';
                if(flips[i]-1 < st.size()){
                    st[flips[i]-1]='1';
                }
                
            }
            h+='1';
            st+=str[i];
            if(h==st){
                c++;
            }
        }
        return c;
    }
};