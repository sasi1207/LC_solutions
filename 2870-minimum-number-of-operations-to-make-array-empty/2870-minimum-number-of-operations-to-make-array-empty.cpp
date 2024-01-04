class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mapping;
        int c=0;
        for(int i=0;i<nums.size();i++){
            mapping[nums[i]]++;
        }
        map<int,int> :: iterator it=mapping.begin();
        while(it!=mapping.end()){
            int b=it->second;
            if(b<2){
                return -1;
            }
            if(b%3==0){
                c+=b/3;
            }
            else if(b%3==1){
                c+=(b-4)/3;
                c+=2;
            }
            else if(b%3==2){
                c+=(b-2)/3;
                c+=1;
            }
            ++it;
        }
        return c;
    }
};