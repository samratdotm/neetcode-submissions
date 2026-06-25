class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;

        for(int i = (int) prices.size() - 1; i >= 0; i--) {
            if(maxi < prices[i])
                maxi = prices[i];
            prices[i] = maxi - prices[i];
        }

        int res = 0;
        for(int x: prices) {
            if(res < x)
                res = x;
        }
        
        return res;
    }
};
