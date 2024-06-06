class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> des;
        for(int num:hand){
            des[num]++;
        }
        map<int,int> :: iterator it,it1;
        while(des.size()>=groupSize){
            it=des.begin();
            if(groupSize==1){
                des.erase(it->first);
            }
            else{
                it1=it;
                ++it1;
                if(it1->first==(it->first+1)){
                    for(int i=0;i<groupSize;i++){
                        if(it->second==1){
                            des.erase(it->first);
                        }
                        else{
                            it->second-=1;
                        }
                        ++it;
                    }
                }
                else{
                    break;
                }
            }
        }
        for(it=des.begin();it!=des.end();++it){
            cout<<it->first<<"  "<<it->second<<endl;
        }
        if(des.size()==0){
            return true;
        }
        return false;
    }
};