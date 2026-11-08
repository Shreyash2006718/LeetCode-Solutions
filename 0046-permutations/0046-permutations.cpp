class Solution {
public:
    void solve(vector<int>& nums, vector<int>& dibya1,
               vector<bool>& used, vector<vector<int>>& ans) {

        if(dibya1.size() == nums.size()) {
            ans.push_back(dibya1);
            return;
        }

        for(int i = 0; i < nums.size(); i++) {
            if(!used[i]) {

                used[i] = true;
                dibya1.push_back(nums[i]);

                solve(nums, dibya1, used, ans);

                dibya1.pop_back();
                used[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> dibya1;
        vector<bool> used(nums.size(), false);

        solve(nums, dibya1, used, ans);

        return ans;
    }
};

