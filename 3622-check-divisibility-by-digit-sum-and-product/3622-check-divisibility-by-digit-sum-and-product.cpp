class Solution {
public:

    pair <int,int> digitextraction(int n){
        int sum =0;
        int product=1;
        int temp =n;
        while(temp>0){
            int digit = temp%10;
             sum = sum + digit;
             product=product*digit;
            temp = temp/10;
        }

        return {sum, product}; 
    }


    bool checkDivisibility(int n) {
        pair<int, int> result = digitextraction(n);
      int sumi = result.first;
      int producti= result.second;
      if(n%(sumi+producti)==0) return true;
      else return false;
    }
};