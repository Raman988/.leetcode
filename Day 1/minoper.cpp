/*
 * @lc app=leetcode id=2870 lang=cpp
 *
 * [2870] Minimum Number of Operations to Make Array Empty
 */

// @lc code=start
class Solution {
public:
   int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        
        int ans=0;
        for(auto it:mp){
            if(it.second==1) return -1;
            int times=it.second;
            
            if(times%3==0){
                ans+=times/3;
            }
            else{
                ans+=times/3+1;
            }
        }
        
        return ans;
}
};
// @lc code=end

