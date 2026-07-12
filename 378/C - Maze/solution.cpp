#include <bits/stdc++.h>
using namespace std;
int n,m,k;
vector <string> grid;
vector <vector<bool>> visited;
int dr[]={-1,1,0,0};
int dc[]={0,0,-1,1};
bool isValid(int r,int c)
{
	if(r<0||r>=n||c<0||c>=m)
		return false;
	if(grid[r][c]=='#'||visited[r][c])
		return false;
	return true;
}
void dfs(int r,int c)
{
	visited[r][c]=true;
	for(int i=0;i<4;i++)
	{
		int nr=r+dr[i];
		int nc=c+dc[i];
		if(isValid(nr,nc))
			dfs(nr,nc);
	}
	if(k>0)
	{
		grid[r][c]='X';
		k--;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m>>k;
	grid.resize(n);
	visited.resize(n,vector<bool>(m));
	int start_r=-1,start_c=-1;
	for(int i=0;i<n;i++)
	{
		cin>>grid[i]; 
		for(int j=0;j<m;j++)
		{
			if(grid[i][j]=='.'||start_r==-1)
			{
				start_r=i;
				start_c=j;
			}
		}
	}
	if(start_r!=-1)
		dfs(start_r,start_c);
	for(int i=0;i<n;i++)
       cout<<grid[i]<<"
";
	return 0;
}