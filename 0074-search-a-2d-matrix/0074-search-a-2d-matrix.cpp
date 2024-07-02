class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int left,right,mid,m=matrix[0].size(),idx_n=-1,idx_m=-1;
        int n=matrix.size();
        left=0;right=n-1;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(matrix[mid][0]<=target && matrix[mid][m-1]>=target)
            {
                idx_n=mid;
                break;
            }
            else if(matrix[mid][0]<target && matrix[mid][m-1]<target)
            {
                left=mid+1;
            }
            else if(matrix[mid][0]>target && matrix[mid][m-1]>target)
            {
                right=mid-1;
            }
        }
        if(idx_n!=-1)
        {
            left=0;right=m-1;
            while(right>=left)
            {
                mid=(left+right)/2;
                if(matrix[idx_n][mid]==target)
                {
                    idx_m=mid;
                    break;
                }
                else if(matrix[idx_n][mid]>target)
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
        }
        if(idx_n!=-1 && idx_m!=-1)return true;
        else return false;
    }
};