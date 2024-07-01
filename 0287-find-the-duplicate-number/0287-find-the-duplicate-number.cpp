class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int dum[n+1];
        for(int i=0;i<=n;i++)
        {
            dum[i]=0;
        }
        int val=0;
        for(int i=0;i<n;i++)
        {
            dum[nums[i]]++;
            if(dum[nums[i]]==2)
            {
                val=nums[i];
                break;
            }
        }
        return val;
    }
};