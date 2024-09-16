class Solution {
public:
    int findMinDifference(vector<string>& t) {
        int n=t.size();
        vector<int> m(n);
        for(int i=0;i<n;i++){
            m[i]=(((int(t[i][0] - 48) * 10)+ int(t[i][1]-48))*60)+((int(t[i][3] - 48) * 10)+ int(t[i][4]-48));
        }
        sort(m.begin(),m.end());
        if(m[n-1]>720){
            return min(m[1]-m[0],(1440-m[n-1]+m[0]));
        }
        return m[1]-m[0];
    }
};