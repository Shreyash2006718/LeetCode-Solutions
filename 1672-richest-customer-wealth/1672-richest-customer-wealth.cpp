class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        
        for (const auto& customer : accounts) {
            // Sum all bank balances for the current customer
            int currentWealth = accumulate(customer.begin(), customer.end(), 0);
            maxWealth = max(maxWealth, currentWealth);
        }
        
        return maxWealth;
    }
};