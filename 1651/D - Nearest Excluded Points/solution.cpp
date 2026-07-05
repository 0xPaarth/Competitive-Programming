#include <bits/stdc++.h>
using namespace std;
int dr[] = {0, 0, -1, 1};
int dc[] = {-1, 1, 0, 0};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    set<pair<int, int>> input_set;
    for(int i = 0; i < n; i++)
    {
    cin>>points[i].first>>points[i].second;
        input_set.insert(points[i]);
    }
    map<pair<int, int>, pair<int, int>> ans;
    queue<pair<int, int>> q;
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            int nr = points[i].first + dr[j];
            int nc = points[i].second + dc[j];
            
          if (!input_set.count({nr, nc})) {
                ans[points[i]] = {nr, nc};
                q.push(points[i]);
                break; 
         }
        }
    }
 
        while (!q.empty()) {
        auto curr = q.front();
        q.pop();
    for(int j=0;j<4;j++){
            int nr=curr.first+dr[j];
            int nc=curr.second+dc[j];
            pair<int,int>neighbor={nr,nc};
            if (input_set.count(neighbor)&&!ans.count(neighbor)) {
                ans[neighbor]=ans[curr];
                q.push(neighbor);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        auto res = ans[points[i]];
        cout << res.first << " " << res.second << "
";
    }
 
    return 0;
}