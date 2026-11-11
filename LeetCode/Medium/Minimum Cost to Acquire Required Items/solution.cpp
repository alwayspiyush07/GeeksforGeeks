class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans=0;
        long long together = min(need1,need2);
        long long alone= abs(need1-need2);
        ans += min(together*cost1+together*cost2,together*costBoth);
        if(need1>need2){
            ans+=min(alone*cost1,alone*costBoth);
        }
        else{
            ans+=min(alone*cost2,alone*costBoth);
        }
        return ans;
    }
};