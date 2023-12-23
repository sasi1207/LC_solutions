class Solution {
private:
    set<pair<int,int>>s;
public:
    bool fool(set<pair<int,int>> &s,int x,int y){
        for(pair<int,int> f:s){
            if(f.first==x){
                if(f.second == y){
                    return true;
                }
            }
        }
        return false;
    }
    bool isPathCrossing(string path) {
        s.insert({0,0});
        int x=0,y=0;
        for(int i=0;i<path.size();i++){
            if(path[i]=='N'){
                y++;
                if(fool(s,x,y)){
                    return true;
                }
                s.insert({x,y});
            }
            else if(path[i]=='S'){
                y--;
                if(fool(s,x,y)){
                    return true;
                }
                s.insert({x,y});
            }
            else if(path[i]=='W'){
                x--;
                if(fool(s,x,y)){
                    return true;
                }
                s.insert({x,y});
            }
            else{
                x++;
                if(fool(s,x,y)){
                    return true;
                }
                s.insert({x,y});
            }
        }
        return false;
    }
};