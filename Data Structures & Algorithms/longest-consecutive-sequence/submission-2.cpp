class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(),nums.end());
        int maxC = 0;

        for (int num : st) {
            if (!st.count(num-1)) {
                int temp = num;
                int count = 1;

                while (st.count(temp+1)) {
                    count++;
                    temp++;
                }

                maxC = max(count,maxC);
            }
        }
        return maxC;     


    }       
};
