class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();

        unordered_map<char,int> hash;

        int l = 0 , maxf = 0 , res = 0;

        for (int r = 0 ; r < n ; r++) {
            hash[s[r]]++;

            maxf = max(maxf,hash[s[r]]);

            while ((r-l+1) - maxf > k) {
                hash[s[l]]--;
                l++;
            }

            res = max(res,r-l+1);
        }

        return res;
    }
};
