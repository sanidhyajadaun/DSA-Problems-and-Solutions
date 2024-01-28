#include<iostream>
#include<vector>
#include<queue>


int n,m;
std::vector<std::vector<bool>> vis(1000,std::vector<bool>(1000));
int dr[] = {-1,0,1,0};
int dc[] = {0,-1,0,1};

void dfs(int x,int y){
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int dx = x+dr[i];
        int dy = y+dc[i];
        if(dx>=0 && dx<n && dy>=0 && dy<m && !vis[dx][dy]){
            dfs(dx,dy);
        }
    }
}

int main(){

    std::cin >> n >> m;

    std::vector<std::vector<char>> grid(n,std::vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            std::cin >> c;
            grid[i][j]=c;
            if(c=='#'){
                vis[i][j]=1;
            } 
        }
    }

    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]){
                dfs(i,j);
                ans++;
            }
        }
    }

    std::cout << ans;
    
}