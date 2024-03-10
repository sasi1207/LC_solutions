class Solution {
public:
    bool binarySearch(vector<int>& array, int x, int low, int high) {
        if (high >= low) {
            int mid = (low + high) / 2;
            if (array[mid] == x){
                return true;
            }
            if (array[mid] > x){
                return binarySearch(array, x, low, mid - 1);
            }
            return binarySearch(array, x, mid + 1, high);
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> b(nums1.begin(),nums1.end());
        set<int>::iterator itr;
        vector<int> nums3;
        int n=nums2.size()-1;
        sort(nums2.begin(),nums2.end());
        for(itr=b.begin();itr!=b.end();itr++){
            cout<<"not equal "<<*itr<<endl;
            if(binarySearch(nums2,*itr,0,n)){
                cout<<*itr<<endl;
                nums3.push_back(*itr);
            }
        }
        return nums3;
    }
};