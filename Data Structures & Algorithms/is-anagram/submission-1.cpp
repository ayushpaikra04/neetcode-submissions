class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false;

        vector<int> hash1(26,0);

        for (int i = 0 ; i < s.size() ; i++) {
            hash1[s[i] - 'a']++;
            hash1[t[i] - 'a']--;

        }

        for (int i = 0 ; i < 26 ; i++) {
            if (hash1[i] != 0) return false;
        }

        return true;
    }
};
