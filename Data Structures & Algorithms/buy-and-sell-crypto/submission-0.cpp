class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxp=0;
        for(int i=1;i<prices.size();i++){
            maxp=max(maxp,prices[i]-minPrice);
            minPrice=min(minPrice,prices[i]);
        }
        return maxp;
    }
};
