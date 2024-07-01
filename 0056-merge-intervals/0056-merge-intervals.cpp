class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
       vector<vector<int>>vv;
        vv.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
           if(vv.back()[1]>=intervals[i][0])
           {
               vv.back()[1]=max(vv.back()[1],intervals[i][1]);
           }
            else vv.push_back(intervals[i]);
        }
       return vv;
        
    }
};