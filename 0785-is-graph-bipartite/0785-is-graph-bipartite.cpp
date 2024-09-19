class Solution {
public:
    int temp=0;
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>col(n,0);
        for(int i=0;i<n;i++)
        {
             if(col[i]==0) 
             {
                 if(dfs(graph,col,i,1)==false) 
                 return false;
             }
        }
        return true;
    }
    bool dfs(vector<vector<int>>& graph,vector<int>&col,int source,int color)
    {
            col[source]=color;
            for(int i=0;i<graph[source].size();i++)
            {
                int child=graph[source][i];
                if(col[child]==0)
                {
                   if(dfs(graph,col,child,3-color)==false)return false;
                }
                else if(col[child]==col[source])
                {
                    return false;
                }
            }
        return true;
    }
};