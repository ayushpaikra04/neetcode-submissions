class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length() , n = s2.length() ;
        if (m > n) return false;

        vector<int> hash(26,0);

        for (int i = 0 ; i < m ; i++) {
            hash[s1[i] - 'a']++;
        }

        sort(s1.begin(),s1.end());

        for (int l = 0 , r = 0 ; r < n ; r++) {
            if (hash[s2[r] - 'a'] == 0) {
                continue;
            }
            else {
                string temp = s2.substr(r,m);
                sort(temp.begin(),temp.end());
                if (temp == s1) return true;
            }
        }

        return false;
    }
};
