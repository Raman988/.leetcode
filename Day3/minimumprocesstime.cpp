/*
 * @lc app=leetcode id=2895 lang=cpp
 *
 * [2895] Minimum process time
 */

// @lc code=start
class Solution {
public:
    int minProcessingTime(vector<int>& t, vector<int>& v) {
        int n=v.size();
        sort(t.begin(),t.end());
        sort(v.begin(),v.end());
        int j=n-1;
        int m=t.size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            int c=0;
            while(c<4)
            {
                ans=max(ans,t[i]+v[j]);
                c++;
                j--;
            }
        }
        return ans;
    }
};
// @lc code=end

