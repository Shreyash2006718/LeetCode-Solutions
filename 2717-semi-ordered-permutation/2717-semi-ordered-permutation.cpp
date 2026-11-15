#include <vector>
#include <algorithm>

class Solution {
public:
    int semiOrderedPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int index1 = -1, indexN = -1;
        
        // Find the indices of 1 and n
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) {
                index1 = i;
            } else if (nums[i] == n) {
                indexN = i;
            }
        }
        
        // Calculate total swaps needed
        int swaps = index1 + (n - 1 - indexN);
        
        // If index1 is greater than indexN, they cross paths, so we subtract 1
        if (index1 > indexN) {
            swaps -= 1;
        }
        
        return swaps;
    }
};