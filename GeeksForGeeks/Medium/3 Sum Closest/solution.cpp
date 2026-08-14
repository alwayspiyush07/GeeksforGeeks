class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        int result = 0;
        int diff = INT_MAX;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = 0; i < n-2 ; i++){
            int left = i + 1;
            int right = n - 1;
            while(left < right){
                int sum = arr[i] + arr[left] + arr[right];
                int currentdiff = abs(target - sum);
                if (currentdiff < diff || (currentdiff == diff && sum > result)){
                    diff = currentdiff;
                    result = sum;
                }
                if (sum == target){
                    return sum;
                }
                else if(sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return result;
    }
};