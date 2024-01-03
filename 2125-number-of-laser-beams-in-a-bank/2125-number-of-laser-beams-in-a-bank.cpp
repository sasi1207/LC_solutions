class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        vector<int> sums(n);
        for(int i=0;i<n;i++){
            int c=0;
            for(char g:bank[i]){
                if(g=='1'){
                    c++;
                }
            }
            sums[i]=c;
        }
        int curr=0;
        int next=1;
        int res=0;
        while(next<n){
            if(sums[next]==0){
                next++;
            }
            else{
                res=res+(sums[next]*sums[curr]);
                curr=next;
                next++;
            }
        }
        return res;
    }
};