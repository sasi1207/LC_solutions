class Solution {
public:
    int check(vector<int>& b, int mid, int k){
        int d=0;
        int c=0;
        for(int i=0;i<b.size();i++){
            if(b[i]<=mid){
                c++;
            }
            else{
                c=0;
            }
            if(c==k){
                c=0;
                d++;
            }
        }
        return d;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        vector<int> flags=bloomDay;
        int n=bloomDay.size();
        if(n<(m*k)){
            return -1;
        }
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        int g=*min_element(bloomDay.begin(),bloomDay.end());
        int mindays=-1;
        while(g<=h){
            int mid=(g+h)/2;
            if(check(bloomDay,mid,k)>=m){
                mindays=mid;
                h=mid-1;
            }
            else{
                g=mid+1;
            }
        }
        return mindays;
    }
};