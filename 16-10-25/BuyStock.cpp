class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprice=prices[0];
        int profit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            buyprice=min(buyprice,prices[i]);
            profit=max(profit,prices[i]-buyprice);
        }
        if(profit<0){
            return 0;
        }
        return profit;
    }
};