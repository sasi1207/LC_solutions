class StockSpanner {
public:
    vector<int> history;
    StockSpanner() {

    }
    
    int next(int price) {
        history.push_back(price);
        int h=0,n=history.size();
        for(int i=n-1;i>=0;i--){
            if(history[i]<=price){
                h++;
            }
            else{
                return h;
            }
        }
        return h;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */