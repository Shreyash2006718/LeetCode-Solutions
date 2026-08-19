class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n =nums.size();
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        for(int i =0;i<n;i++){
            maximum = max(maximum, nums[i]);
        }

        for(int i =0;i<n;i++){
            minimum = min(minimum,nums [i]);
        }
         unordered_set<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        vector<int> ans;

        for (int i = minimum; i <= maximum; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};