class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int f;

        for(int i=0;i<prices.size();i++){
            f=0;
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    f=1;
                    break;
                }
            }
            if(f==0){
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};