class Solution {
public:

    int counter ( int n ){
        if(n<=0) return 0;
        if(n==1) return 1;
        int count =2;
        for(int i =2;i*i<=n;i++){
            if(n%i==0){
                count = count+1;
                if(i!=n/i){
                    count = count+1;
                }
            }
        }
        return count;
    }

    bool isThree(int n) {
        if(counter(n)==3) return true;
        else return false;
    }
};