class Solution {
public:
    string dec2bin(int n){
        string h="";
        while(n){
            if(n%2==0){
                h='0'+h;
            }
            else{
                h='1'+h;
            }
            n=n/2;
        }
        return h;
    }
    int minBitFlips(int start, int goal) {
        string start_b=dec2bin(start),goal_b=dec2bin(goal);
        int m=start_b.size(),n=goal_b.size();
        string k(abs(m-n),'0');
        if(m<n){
            start_b=k+start_b;
        }
        else{
            goal_b=k+goal_b;
        }
        int c=0;
        for(int i=0;i<max(m,n);i++){
            if(goal_b[i]!=start_b[i]){
                c++;
            }
        }
        return c;
    }
};