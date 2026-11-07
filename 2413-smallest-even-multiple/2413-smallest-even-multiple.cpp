class Solution {
public:

    int gcd(int a, int b){
        while(b!=0){
            a= a%b;
            swap(a,b);
        }
        return a;
    }

    int lcm(int a, int b ){
        return (a/gcd(a,b)*b);
    }

    int smallestEvenMultiple(int n) {
        if(n==0) return 0;
        if(n==2) return 2;
        return lcm(2,n);
    }
};