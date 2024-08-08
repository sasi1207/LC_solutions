class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int top=0,left=0,right=n-1,bottom=n-1;
        int h=1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                ans[top][i]=h;
                h++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=h;
                h++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans[bottom][i]=h;
                    h++;
                }
                bottom--;
            }
            
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=h;
                    h++;
                }
                left++;
            }
        }
        return ans;
    }
};