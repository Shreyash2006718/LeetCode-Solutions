class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;
        long double base = x;

        if (power < 0) {
            base = 1 / base;
            power = -power;
        }

        long double ans = 1;

        while (power > 0) {
            if (power % 2 == 1) {
                ans *= base;
            }

            base *= base;
            power /= 2;
        }

        return (double)ans;
    }
};