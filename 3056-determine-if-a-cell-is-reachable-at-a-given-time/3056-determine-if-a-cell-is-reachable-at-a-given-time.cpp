class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx and sy==fy and t==1){
            return false;
        }
        if(max(abs(sx-fx),abs(sy-fy))<=t){
            return true;
        }
        return false;
    }
};