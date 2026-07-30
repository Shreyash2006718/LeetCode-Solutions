class Solution {
public:
    int kthFactor(int n, int k) {
        int count =0;
        int root = sqrt(n);
        for (int i = 1; i <= root; i++) {
            if (n % i == 0) {
                count++;
                if (count == k)
                    return i;
            }
        }
        for(int i=root;i>=1;i--){
            if(i==n/i) continue;
            if(n%i==0){
                count++;
                if(count==k) return n/i;
            }
        }

        return -1;
    }
};