class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0){
            return true;
        }
        int g=sqrt(c);
        for(int i=1;i<=g;i++){
            if(sqrt(c-(i*i))==int(sqrt(c-(i*i)))){
                return true;
            }
        }
        return false;
    }
};