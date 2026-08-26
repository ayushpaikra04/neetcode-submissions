class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        int l = 0 , r = n-1;

        while (l < r) {
            int h = min(heights[l],heights[r]);
            int area = (r-l)*h;

            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }

            maxArea = max(maxArea,area);
        }

        return maxArea;
    }
};
