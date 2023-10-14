class Solution {
// By memoization     

    int CalculateFibonnaci(int n , vector<int>& dp){
        //base case
       if(n <= 1){
           return n;
       } 
 
      if(dp[n] != -1){
          return dp[n];
      }  
        
       return dp[n] = CalculateFibonnaci(n-1, dp)+CalculateFibonnaci(n-2, dp);
        
    }
    
    
public:
    int fib(int n) {
        vector<int> dp(n+1, -1);
       return CalculateFibonnaci(n,dp);
    }
};