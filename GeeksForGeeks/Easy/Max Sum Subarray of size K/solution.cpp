class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int sum = 0;
        for(int i=0;i<k;i++){
            sum = sum + arr[i];
        }
        int res=sum;
        for(int i=k;i<n;i++){
            sum = sum + arr[i];
            sum = sum - arr[i-k];
            res = max(res,sum);
        }
        return res;
    }
};