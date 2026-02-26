class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int smallest = prices[0];
       int maxGain = 0;
       int difference;

       for(int i = 1; i < prices.size(); i++){

           difference = prices[i] - smallest;
           maxGain = max(maxGain, difference);
           smallest = min(smallest, prices[i]);

       }
       return maxGain;
        
    }
};