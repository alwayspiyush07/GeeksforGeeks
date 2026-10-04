class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low = 0;
        int high = k;
        int sum = 0;
        for (int i = low; i < high; i++){
            sum = sum + arr[i];
        }
        int res = sum;
        while(high < arr.size()){
            sum = sum - arr[low];
            low++;
            sum = sum + arr[high];
            high++;
            res = max(sum,res);
        }
        return res;
    }
    
};