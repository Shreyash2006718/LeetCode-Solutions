class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        stringstream ss(s);
        vector<string> words;

        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        if (pattern.size() != words.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); i++) {

            char c = pattern[i];
            string w = words[i];

            if (charToWord.find(c) != charToWord.end()) {
                if (charToWord[c] != w) {
                    return false;
                }
            }

            if (wordToChar.find(w) != wordToChar.end()) {
                if (wordToChar[w] != c) {
                    return false;
                }
            }

            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};