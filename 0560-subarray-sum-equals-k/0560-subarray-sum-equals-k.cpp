#include <vector>
#include <unordered_map>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int count = 0;
        int current_sum = 0;
        
        // Hash map to store the frequency of prefix sums
        std::unordered_map<int, int> prefix_sum_counts;
        
        // Initialize with {0: 1} to handle subarrays starting from index 0
        prefix_sum_counts[0] = 1;
        
        for (int num : nums) {
            current_sum += num;
            
            // Check if (current_sum - k) exists in our map
            int diff = current_sum - k;
            if (prefix_sum_counts.find(diff) != prefix_sum_counts.end()) {
                count += prefix_sum_counts[diff];
            }
            
            // Add the current_sum to the map
            prefix_sum_counts[current_sum]++;
        }
        
        return count;
    }
};