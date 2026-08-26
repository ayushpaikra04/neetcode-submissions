class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mpp;
        vector<int> ans;

        for (int i = 0 ; i < numbers.size() ; i++) {
            mpp[numbers[i]] = i+1;
        }

        for (int i = 0 ; i < numbers.size() ; i++) {
            int req = target - numbers[i];
            if (mpp.count(req)) {
                ans.push_back(i+1);
                ans.push_back(mpp[req]);
                break;
            }
        }

        return ans;
    }
};
