int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='X')
                vis[i][j]=true;
            }
        }
        for(int i=0;i<m;i++)
        {
            if(grid[i][0]=='O')
            dfs(grid,i,0,vis);
            if(grid[i][n-1]=='O')
            dfs(grid,i,n-1,vis);
        }
        for(int j=1;j<n-1;j++)
        {
            if(grid[0][j]=='O')
            dfs(grid,0,j,vis);
            if(grid[m-1][j]=='O')
            dfs(grid,m-1,j,vis);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j])
                grid[i][j]='X';
            }
        }