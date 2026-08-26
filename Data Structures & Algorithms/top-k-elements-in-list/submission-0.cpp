class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> mpp;

        for (int i = 0 ; i < n ; i++) {
            mpp[nums[i]]++;    
        }

        vector<vector<int>> freq(n+1);

        for (auto const& [val, count] : mpp) {
            freq[count].push_back(val);
        }

        vector<int> res;

        for (int i = freq.size() - 1 ; i > 0 ; --i) {
            for (int n : freq[i]) {
                res.push_back(n);
                if (res.size() == k) return res;
            }
        }
        
        return res;

    }
};
