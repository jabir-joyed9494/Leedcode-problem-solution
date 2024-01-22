class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sell=prices[0],profit=0,ans=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<=sell) sell=prices[i];
                else ans=max(ans, prices[i]-sell);
        }
        return ans;
        
    }
};