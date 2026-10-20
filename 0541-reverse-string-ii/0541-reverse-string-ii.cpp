class Solution {
public:
    void reverseSegment(string& s, int left, int right) {
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

public:
    string reverseStr(string s, int k) {
        int n = s.size();

        for (int i = 0; i < n; i += 2 * k) {
            int right = min(i + k - 1, n - 1);
            reverseSegment(s, i, right);
        }

        return s;
    }
};