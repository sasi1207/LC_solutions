class Solution {
public:
    int minOperations(int k) {
        if(k==1){
            return 0;
        }
        int c=INT_MAX;
        int cprev=INT_MAX;
        for(int i=1;i<k;i++){
            if((i-1)>cprev){
                break;
            }
            if(k%i!=0){
                
                c=min(c,((i-1)+(k/i)));
            }
            else{
                c=min(c,((i-1)+(k/i)-1));
            }
            cout<<c<<endl;
            cprev=c;
        }
        return c;
    }
};