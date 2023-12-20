class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int amt=prices[0]+prices[1];
        if(amt<=money){
            return money-amt;
        }
        return money;
    }
};