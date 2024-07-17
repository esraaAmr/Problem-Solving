class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0; 

        int max_profit = 0; 
        int min_price = std::numeric_limits<int>::max(); 

        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] < min_price) {
                min_price = prices[i];
            } else if (prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price; // Update max profit
            }
        }

        return max_profit;
    }
};
