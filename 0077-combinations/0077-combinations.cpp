class Solution {
public:
    void solve(int n, int k, int start,
               vector<int>& dibya1,
               vector<vector<int>>& ans) {

        if(dibya1.size() == k) {
            ans.push_back(dibya1);
            return;
        }
        for(int i = start; i <= n; i++) {
            dibya1.push_back(i);

            solve(n, k, i + 1, dibya1, ans);

            dibya1.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> dibya1;

        solve(n, k, 1, dibya1, ans);

        return ans;
    }
};