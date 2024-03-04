class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0){
            return 0;
        }
        sort(tokens.begin(),tokens.end());
        int score=0;
        int i=0;
        int j=tokens.size()-1;
        if(power<tokens[i]){
            return 0;
        }
        while(i<j){
            if(tokens[i]<=power){
                score++;
                power-=tokens[i];
                i++;
            }
            else{
                power+=tokens[j];
                score--;
                j--;
            }
        }
        if(i==j){
            if(tokens[i]<=power){
                score++;
                power-=tokens[i];
            }
        }
        return score;
    }
};