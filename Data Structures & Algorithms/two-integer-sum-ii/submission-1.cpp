class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0 , r = n-1;

        while (l < r) {
            int currSum = numbers[l] + numbers[r];

            if (target > currSum) l++;
            else if (target < currSum) r--;
            else break;
        }

        return {l+1,r+1};     

        
    }
};
