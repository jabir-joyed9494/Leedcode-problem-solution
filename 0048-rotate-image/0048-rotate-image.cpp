class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size()-1;
        
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=i;j<n-i;j++)
            {
                int val1=matrix[i][j],val2=0;
                int idx1=j,idx2=n-i;
                val2=matrix[idx1][idx2];
                matrix[idx1][idx2]=val1;
                val1=val2;
                idx1=idx2;idx2=n-j;
                 val2=matrix[idx1][idx2];
                matrix[idx1][idx2]=val1;
                val1=val2;
                idx1=idx2;idx2=i;
                 val2=matrix[idx1][idx2];
                matrix[idx1][idx2]=val1;
                val1=val2;
                idx1=idx2;idx2=j;
                 val2=matrix[idx1][idx2];
                matrix[idx1][idx2]=val1;
                val1=val2;
                
            }
        }
        
    }
};