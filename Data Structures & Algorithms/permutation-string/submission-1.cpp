class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length(), n = s2.length();
        if (m > n) return false;

        vector<int> count1(26, 0);
        vector<int> count2(26, 0);

        // Record the frequencies for s1 and the first window of s2
        for (int i = 0; i < m; i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        // Check if the very first window matches
        if (count1 == count2) return true;

        // Slide the window across the rest of s2
        for (int i = m; i < n; i++) {
            // Add the new character entering the window
            count2[s2[i] - 'a']++;
            
            // Remove the old character leaving the window
            count2[s2[i - m] - 'a']--;

            // Check if the current window is a permutation of s1
            if (count1 == count2) return true;
        }

        return false;
    }
};