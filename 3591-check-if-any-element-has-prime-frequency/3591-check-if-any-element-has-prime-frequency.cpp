class Solution {
public:
        bool isPrimefunction(int n){
            if(n<2) return false;
            for (int i =2;i*i<=n;i++){
                if(n%i==0) return false;
            }
            return true;
        }


    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map <int , int> frequency ;

        for ( int num  :nums ){
            frequency[num]++;
        }
        
        for (auto it: frequency){
            if(isPrimefunction(it.second)){
                return true;
            }
        }

        return false;


    }
};