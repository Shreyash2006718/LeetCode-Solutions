class Solution {
public:
    int counter(int n) {
        int count = 2; 
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                count = count + 1;
                if (i != n / i) {
                    count = count + 1;
                }
            }
        }
        return count;
    }

    int summer(int n) {
        int sur = 1 + n; 
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sur = sur + i;
                if (i != n / i) {
                    sur = sur + (n / i);
                }
            }
        }
        return sur;
    }

    int sumFourDivisors(vector<int>& nums) {
        int totalSum = 0;
        int w = nums.size();

        for (int i = 0; i < w; i++) {
            if (counter(nums[i]) == 4) {
                totalSum += summer(nums[i]);
            }
        }

        return totalSum;
    }
};