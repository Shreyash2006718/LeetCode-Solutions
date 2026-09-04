class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result;

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0 && nums[i] % k == 0) {
                result.push_back(nums[i]);
            }
        }

        sort(result.begin(), result.end());

        int expected = k;

        for (int i = 0; i < result.size(); i++) {
            if (result[i] == expected) {
                expected += k;
            }
            else if (result[i] > expected) {
                return expected;
            }
        }

        return expected;
    }
};