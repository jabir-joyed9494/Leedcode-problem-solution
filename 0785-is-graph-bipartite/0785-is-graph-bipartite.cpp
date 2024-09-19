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
                 dfs(graph,col,i,1);
             }
        }
      if(temp==1)  return false;
        else return true;
    }
    void dfs(vector<vector<int>>& graph,vector<int>&col,int source,int color)
    {
            col[source]=color;
            for(int i=0;i<graph[source].size();i++)
            {
                int child=graph[source][i];
                if(col[child]==0)
                {
                    if(col[source]==1)
                    {
                        dfs(graph,col,child,2);
                    }
                    else
                    {
                        dfs(graph,col,child,1); 
                    }
                }
                else if(col[source]==col[child])
                {
                    temp=1;
                }
            }
       
    }
};