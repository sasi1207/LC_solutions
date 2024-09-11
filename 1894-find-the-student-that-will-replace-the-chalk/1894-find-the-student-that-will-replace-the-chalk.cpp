class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int i=0;
        int n=chalk.size();
        long long s_c=0;
        for(int i=0;i<n;i++){
            s_c+=chalk[i];
        }
        int rem=k%s_c;
        while(rem>=chalk[i]){
            rem-=chalk[i];
            i=i+1;
        }
        return i;
    }
};