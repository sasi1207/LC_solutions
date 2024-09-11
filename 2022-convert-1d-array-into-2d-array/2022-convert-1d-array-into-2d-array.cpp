class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if((m*n)!=original.size()){
            return {};
        }
        vector<vector<int>> res;
        int i=0;
        int b=original.size();
        while(i<b){
            vector<int> temp1(n);
            for(int h=0;h<n;h++){
                temp1[h]=original[i+h];
            }
            res.push_back(temp1);
            i+=n;
        }
        return res;
    }
};