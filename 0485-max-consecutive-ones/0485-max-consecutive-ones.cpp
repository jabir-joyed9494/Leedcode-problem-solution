class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,maxx=0,temp=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                cnt++;
            }
            else
            {
                maxx=max(maxx,cnt);
                cnt=0;
            }
        }
         maxx=max(maxx,cnt);
         return maxx;
    }
};