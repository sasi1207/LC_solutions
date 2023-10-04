class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice=0,bob=0;
        for(int i=1;i<colors.size()-1;i++){
            char prev=colors[i-1];
            char curr=colors[i];
            char next=colors[i+1];
            if(prev=='A' and curr=='A' and next=='A'){
                alice++;
            }
            else if(prev=='B' and curr=='B' and next=='B'){
                bob++;
            }
        }
        return alice > bob;
    }
};