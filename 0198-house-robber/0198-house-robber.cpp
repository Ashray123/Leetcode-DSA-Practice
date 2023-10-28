class Solution {
private:
    int calculateMaxRobbingCapacity(int index, vector<int>& nums, vector<int>& dp)
    {
        if(index==0){
            return nums[index];
            
        }
        if(index < 0){
            return 0;
        }
        if(dp[index]!= -1){
      return dp[index];        
        }
   int pickHouse = nums[index]+ calculateMaxRobbingCapacity(index-2,nums, dp);
    int notpickHouse = 0 + calculateMaxRobbingCapacity(index-1, nums, dp);
        
        return dp[index] = max(pickHouse , notpickHouse);

    }
    
    public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return calculateMaxRobbingCapacity(n-1,nums,dp);
    }
};