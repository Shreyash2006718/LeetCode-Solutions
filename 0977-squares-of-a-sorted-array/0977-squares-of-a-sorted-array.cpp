class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0 ;
        int right = n - 1;
        vector <int> answer(n);
       for ( int i = n-1;i>=0;i--){
        int leftsquare = nums[left]*nums[left];
        int rightsquare= nums[right]* nums[right];
        if (leftsquare>=rightsquare){
            answer[i]=leftsquare;
            left++;
        }
        else{
            answer[i]= rightsquare;
            right--;
        }
       }

       return answer;
        
    }
};