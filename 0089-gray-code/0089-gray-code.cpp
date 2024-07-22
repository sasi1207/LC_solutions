class Solution {
public:
    int bin2dec(string s){
        int h=0;
        int n=s.size();
        int base=1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                h+=base;
            }
            base*=2;
        }
        return h;
    }
    vector<int> gray={0,1};
    vector<string> graycod={"0","1"};
    vector<int> grayCode(int n) {
        if(n==1){
            return gray;
        }
        else{
            int n=gray.size();
            for(int i=n-1;i>=0;i--){
                string f="";
                f+='1';
                f+=graycod[i];
                graycod.push_back(f);
                gray.push_back(bin2dec(f));
            }
            for(int i=0;i<n;i++){
                string f="";
                f+='0';
                f+=graycod[i];
                graycod[i]=f;
                gray[i]=bin2dec(graycod[i]);
            }
        }
        return grayCode(n-1);
    }
};