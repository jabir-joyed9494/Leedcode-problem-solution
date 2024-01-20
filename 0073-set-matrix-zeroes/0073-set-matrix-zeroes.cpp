class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>matrix1(n+5);
       matrix1=matrix;
       
        for(int i=0;i<matrix1.size();i++)
        {
            for(int j=0;j<matrix1[0].size();j++)
            {
                if(matrix1[i][j]==0)
                {
                    matrix1[i][j]=0;
                   int left=j-1,right=j+1,up=i-1,down=i+1;
                    for(int ii=left;ii>=0;ii--)
                    {
                        
                            matrix[i][ii]=0;
                        
                    }
                      for(int ii=right;ii<m;ii++)
                    {
                        
                            matrix[i][ii]=0;
                        
                    }
                    for(int ii=up;ii>=0;ii--)
                    {
                        
                            matrix[ii][j]=0;
                        
                    }
                      for(int ii=down;ii<n;ii++)
                    {
                        
                            matrix[ii][j]=0;
                        
                    }
                }
            }
        }
       // return matrix;
        
    }
};