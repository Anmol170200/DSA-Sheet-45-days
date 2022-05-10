class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int i=1;
        while(i<prices.size()){
            if(prices[i] > prices[i-1]){
                profit= prices[i]-prices[i-1] +profit ;
            }
            i++;
        }
        return profit;
    }
};