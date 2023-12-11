class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int h=arr.size()/4;
        set<int> a(arr.begin(),arr.end());
        for(int f: a){
            if(count(arr.begin(),arr.end(),f)>h){
                return f;
            }
        }
        return 0;
        
    }
};