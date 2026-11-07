class Solution {
public:

    int gcd( int a , int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }

    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int small=nums[0];
        int large =nums[nums.size()-1];
        return gcd( small, large);
    }
};