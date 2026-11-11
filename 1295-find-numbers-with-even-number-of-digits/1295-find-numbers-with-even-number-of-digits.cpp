class Solution {
public:

    int countdigit(int n) {
    if (n == 0) return 1;

    int count = 0;

    while (n > 0) {
        count++;
        n = n / 10;
    }

    return count;
}
    

    int findNumbers(vector<int>& nums) {
        int counter =0;
        for (int i =0;i<nums.size();i++){
            if (countdigit(nums[i])%2==0) counter++;

        }
        return counter;
    }
};