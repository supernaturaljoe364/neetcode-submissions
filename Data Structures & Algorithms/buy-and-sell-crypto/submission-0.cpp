class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //two pointers
        int left = 0;
        int right = 1;

        int maxProfit = 0;
        while(right < prices.size()){
            
            if(prices[right] < prices[left])
                left = right;
            else{
                //calculate the profit
                int temp = prices[right] - prices[left];
                maxProfit = max(maxProfit, temp);
            }

            right++;
        }

        return maxProfit;
    }
};
