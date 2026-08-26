class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false;
        
        vector<int> hash1(26);
        vector<int> hash2(26);

        for (int i = 0 ; i < s.size() ; i++) {
            hash1[s[i] - 'a']++;
            hash2[t[i] - 'a']++;

        }

        for (int i = 0 ; i < t.size() ; i++) {
            if (hash2[t[i] - 'a'] != hash1[t[i] - 'a']) return false;
        }

        return true;
    }
};
