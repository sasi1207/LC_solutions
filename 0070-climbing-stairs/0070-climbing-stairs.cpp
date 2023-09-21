class Solution {
public:
    int climbStairs(int n) {
        int g=0;
        if (n<=2){
            return n;
        }
        int prev=1,curr=1;
        for(int i=2;i<=n;i++){
            int temp=curr;
            curr=prev+curr;
            prev=temp;
        }
        return curr; 
    }
};