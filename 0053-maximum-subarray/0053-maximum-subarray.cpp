class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0,ans=0,maxx=-100000;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum<=0) sum=0;
            else ans=max(sum,ans);
            maxx=max(maxx,nums[i]);
            
        }
        if(maxx<0) ans=maxx;
        return ans;
        
    }
};