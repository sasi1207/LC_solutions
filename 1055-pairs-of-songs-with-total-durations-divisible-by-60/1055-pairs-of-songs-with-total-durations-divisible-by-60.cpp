class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> V(60);
        int c=0;
        for(int i=0;i<time.size();i++){
            int a = time[i]%60;
            if(a==0){
                c+=V[0];
            }
            else{
                c+=V[60-a];
            }
            V[a]++;
        }
        return c;
    }
};