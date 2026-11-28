class Solution {
public:
    long long countHours(vector<int>& piles , int k) {
        long long count = 0 ;
        for (int i = 0 ; i < piles.size() ; i++) {
            count += (1LL*piles[i] + k - 1)/k;
        }

        return count;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
           int n = piles.size();
           int m = 0;

           for (int i = 0 ; i < n ; i++) {
            m = max(m,piles[i]);
           }

           int left = 1 , right = m , mink = m;

           while (left <= right) {
            int mid = left + (right - left)/2;

            if (countHours(piles,mid) <= h) {
                mink = min(mink,mid);
                right = mid - 1;
            } else {
                left = mid + 1;
            }
           }

           return mink;


    }
};
