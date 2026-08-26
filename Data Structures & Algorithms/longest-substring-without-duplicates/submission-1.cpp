class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hash;
        int n = s.length();
        int maxlen = 0;
        int l = 0 , r = -1;

        while (r < n-1 ) {
            r++;
            hash[s[r]]++;
            while (hash[s[r]] > 1) {
                hash[s[l]]--;
                l++;
            }

            
            maxlen = max(maxlen,r-l+1);
        }        

        return maxlen;
    }
};
