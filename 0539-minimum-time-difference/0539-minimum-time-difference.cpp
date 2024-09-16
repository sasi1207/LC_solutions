class Solution {
public:
    int findMinDifference(vector<string>& t) {
        int n=t.size();
        vector<int> m(n);
        for(int i=0;i<n;i++){
            m[i]=(((int(t[i][0] - 48) * 10)+ int(t[i][1]-48))*60)+((int(t[i][3] - 48) * 10)+ int(t[i][4]-48));
            cout<<m[i]<<endl;
        }
        sort(m.begin(),m.end());
        int mini=1440;
        for(int i=1;i<n;i++){
            mini=min(mini,m[i]-m[i-1]);
        }
        if(m[n-1]>720){
            return min(mini,(1440-m[n-1]+m[0]));
        }
        return mini;
    }
};