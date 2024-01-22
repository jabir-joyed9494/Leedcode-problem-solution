class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>generated(numRows);
        generated[0].push_back(1);
        if(numRows>1) generated[1].push_back(1),generated[1].push_back(1);
        for(int i=2;i<numRows;i++)
        {
            generated[i].push_back(1);
            for(int j=1;j<generated[i-1].size();j++)
            {
                generated[i].push_back(generated[i-1][j]+generated[i-1][j-1]);
            }
            generated[i].push_back(1);
        }
        return generated;
    }
};