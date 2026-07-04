#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <vector<bool>>caught_fire;
int dr[]={0,0,-1,1};
int dc[]={-1,1,0,0};
vector <pair<int,int>> coordinate;
void bfs()
{
    queue<pair<int,int>> q;
    for(auto [r,c] : coordinate)
    {
        q.push({r,c});
        caught_fire[r][c] = true;
    }
	
    int last_r = -1, last_c = -1;
 
    while(!q.empty())
    {
        auto [r, c] = q.front();
        q.pop();
        
        // Update the last processed tree coordinates
        last_r = r;
        last_c = c;
 
        for(int i=0; i<4; i++)
        {
            int nr = r + dr[i];
            int nc = c + dc[i];
            
            if(nr > n || nr < 1 || nc > m || nc < 1)
                continue;
                
            if(!caught_fire[nr][nc])
            {
                caught_fire[nr][nc] = true;
                q.push({nr, nc});
            }
        }
    }
    
    // The last tree popped is guaranteed to be the last one to burn
    cout << last_r << " " << last_c << "
";
}
int main()
{
    // Redirect standard input and output to files required by the problem
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    int k;
    cin >> k;
    coordinate.resize(k);
    for(auto &[r,c] : coordinate)
        cin >> r >> c;
        
    caught_fire.resize(n+1, vector<bool>(m+1, false));
    bfs();
    
    return 0;
}