class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1){
            return 0;
        }
        int i = 0;
        int j = 1;
        int maxHasil = prices[j] - prices[i]; 
        if (maxHasil < 0){
            maxHasil = 0;
        }
        while (j < prices.size()){
            if (prices[i] < prices[j]) {
                int profit = prices[j] - prices[i];
                maxHasil= max(maxHasil, profit);
            } else {
                i = j;
            }
            j++;   
        }
        return maxHasil;
    }
};
