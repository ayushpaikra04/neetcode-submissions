class Solution {
   public:
    bool isPalindrome(string s) { 
        int l = 0, r = s.length() - 1; 

        while (l < r) {
            while (l < r && !alphacheck(s[l])) {
                l++;
            }
            while (r > l && !alphacheck(s[r])) {
                r--;
            }

            if (tolower(s[l]) != tolower(s[r])) return false;

            l++; r--;
        }
        return true;
        
    }

    bool alphacheck(char c) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) return true;

        return false;
    }
    
};
