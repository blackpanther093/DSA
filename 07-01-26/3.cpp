// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int hold=0;
        int profit=0;
        int bought=-1;
        for(int i=0; i<n-1; i++){
            // if(nums[i]>nums[i+1])
            //     continue;
            if(hold==0 && prices[i]<prices[i+1]){
                bought=i;
                hold=1;
            }
            if(hold==1 && prices[bought]<prices[i+1]){
                profit+=prices[i+1]-prices[bought];
                hold=0;
            }
        }
        return profit;
    }
};