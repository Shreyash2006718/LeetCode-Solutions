class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(m!=n) return false;
        
        unordered_map<char,int> frequency;
        for(char c:s){
            frequency[c]++;
        }
        for(char c:t){
            frequency[c]--;
        }

        for(auto it: frequency){
            if(it.second!=0) return false;
        }

        return true;
    }
};