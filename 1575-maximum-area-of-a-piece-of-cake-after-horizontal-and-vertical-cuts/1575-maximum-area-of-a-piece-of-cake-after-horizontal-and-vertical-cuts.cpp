class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int max_row=horizontalCuts[0];
        int max_col=verticalCuts[0];
        int r=horizontalCuts.size();
        int c=verticalCuts.size();
        if(r==1){
            max_row=max(horizontalCuts[0],(h-horizontalCuts[0]));
        }
        else{
            for(int i=0;i<r-1;i++){
                max_row=max(max_row,(horizontalCuts[i+1]-horizontalCuts[i]));
            }
        }
        if(c==1){
            max_col=max(verticalCuts[0],(w-verticalCuts[0]));
        }
        else{
            for(int i=0;i<c-1;i++){
                max_col=max(max_col,(verticalCuts[i+1]-verticalCuts[i]));
            }
        }
        max_row=max(max_row,(h-horizontalCuts[r-1]));
        max_col=max(max_col,(w-verticalCuts[c-1]));
        return ((1LL*max_row*max_col)%1000000007);
    }
};