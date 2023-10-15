class Solution {
    private:
         int DistinctWays(int n , vector<int>& dp){
             if(n<=1){
                 return 1;
             }
             if(dp[n]!= -1){
                 return dp[n];
             }
             
          return dp[n] = DistinctWays(n-1,dp)+DistinctWays(n-2,dp);
             
             
         }
    
    
    
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return DistinctWays(n,dp);
        
        
        
    }
};