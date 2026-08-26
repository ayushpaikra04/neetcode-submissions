class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length() , n = s2.length();
        if (m > n) return false;

        vector<int> s1count(26,0);
        vector<int> s2count(26,0);

        for (int i = 0 ; i < m ; i++) {
            s1count[s1[i]-'a']++;
            s2count[s2[i]-'a']++;
        }

        if (s1count == s2count) return true;

        for (int l = 0 , r = m ; r < n ; r++) {
            s2count[s2[r] - 'a']++;
            s2count[s2[l++]-'a']--;
            if (s1count == s2count) return true;
        }

        return false;
    }
};
