class Solution {
public:
    int firstUniqChar(string s) {
        int n =s.size();
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }

        int i =0;
        for(char c:s){
            if(freq[c]==1){
                return i;
            }
            i++;
        }
        return -1;
    }
};