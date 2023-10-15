class Solution {
   
    
//     //memoization 

//     private:
//          int DistinctWays(int n , vector<int>& dp){
//              if(n<=1){
//                  return 1;
//              }
//              if(dp[n]!= -1){
//                  return dp[n];
//              }
             
//           return dp[n] = DistinctWays(n-1,dp)+DistinctWays(n-2,dp);
             
//          }
    
    
    
// public:
//     int climbStairs(int n) {
//         vector<int>dp(n+1,-1);
//         return DistinctWays(n,dp);
        
        
        
//     }
    
    
    public : 
    //Space Optimized, qns similar to Fibonnaci
    
         int climbStairs(int n){
  
        int prev2= 1;
        int prev = 1;
        int curr_i;
        for(int i =2 ;i<=n;i++){
            curr_i = prev2 + prev;
            prev2 = prev;
            prev = curr_i;    
        }
        
       return prev;
    
    
    
         }
    
};