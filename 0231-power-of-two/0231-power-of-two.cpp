class Solution {
public:
    bool isPowerOfTwo(int n) {
        int r=n%2;
        int q=n/2;
        if(n==1){
            return true;
        }
        if(r==0 and q==1){
            return true;
        }
        else if(r==0 and q>1){
            return isPowerOfTwo(q);
        }
        return false;

    }
};