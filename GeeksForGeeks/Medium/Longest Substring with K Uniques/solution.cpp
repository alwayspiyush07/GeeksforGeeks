class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int high = 0; 
        int low = 0;
        int n = s.size();
        int res = INT_MIN;
        unordered_map<char, int> f;
        for(high = 0; high < n; high++){
            f[s[high]]++;
            while (f.size() > k){
                f[s[low]]--;
                low++;
                if(f[s[low-1]]==0){
                    f.erase(s[low-1]);
                }
            }
            if(f.size() == k){
                int len = high - low + 1;
                res = max(res,len);
            }
        }
        if(res == INT_MIN){
            return -1;
        }
        else{
            return res;
        }
    }
};