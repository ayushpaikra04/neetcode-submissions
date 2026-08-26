class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxC = 0;
        unordered_map<int,int> mpp;
        for (int i = 0 ; i < n ; i++) {
            mpp[nums[i]] = 0;
        }
        for (int i = 0 ; i < n ; i++){
            if (mpp[nums[i]]) continue;
            else mpp[nums[i]]++;
            int temp = nums[i]+1;
            int count = 1;
            while(mpp.count(temp)) {
                mpp[temp]++;
                temp++;
                count++;
            } 
            maxC = max(count,maxC);
        }
        return maxC;
    }       
};
