class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> sed;
        for(int i=0;i<arr.size();i++){
            sed[arr[i]]++;
        }
        int g=0;
        for(int i=0;i<arr.size();i++){
            if(sed[arr[i]]==1){
                g++;
            }
            if(g==k){
                return arr[i];
            }
        }
        return "";
    }
};