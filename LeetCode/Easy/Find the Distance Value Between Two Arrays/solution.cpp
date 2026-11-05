class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        

        sort(begin(arr2), end(arr2));
        int ans = 0;

        for (int x : arr1) {

            int idx = lower_bound(begin(arr2), end(arr2), x) - begin(arr2);

            if (idx < arr2.size() && abs(x - arr2[idx]) <= d) {
                continue;
            }

            if (idx > 0 && abs(x - arr2[idx - 1]) <= d) {
                continue;
            }

            ans++;
        }

        return ans;
    }
};