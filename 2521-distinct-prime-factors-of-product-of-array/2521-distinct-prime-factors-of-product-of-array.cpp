class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> dibya;

    for (int i = 0; i < n; i++) {
            long long multiplier = nums[i];

        for (int j = 2; j * j <= multiplier; j++) {
            while (multiplier % j == 0) {
                    dibya.insert(j);
                    multiplier /= j;
            }
        }
            if (multiplier > 1) {
                dibya.insert(multiplier);
            }
        }
        return dibya.size();
    }
};