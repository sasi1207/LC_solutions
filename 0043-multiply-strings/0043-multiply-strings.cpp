class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int n1=num1.size(),n2=num2.size();
        vector<int> nu(n1+n2,0);
        for(int i=n1-1;i>=0;i--){
            for(int j=n2-1;j>=0;j--){
                nu[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                nu[i+j]+=nu[i+j+1]/10;
                nu[i+j+1]%=10;
            }
        }
        int i=0;
        while(i<nu.size() && nu[i]==0){
            ++i;
        }
        string k="";
        while(i<nu.size()){
            k.push_back(nu[i]+'0');
            ++i;
        }
        return k;

    }
};