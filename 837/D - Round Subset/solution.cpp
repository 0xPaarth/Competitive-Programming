#include <bits/stdc++.h>
using namespace std;
 
pair<int,int> countFactor(long long num) {
    int count2=0, count5=0;
    while(num%2==0) {
        count2++;
        num/=2;
    }
    while(num%5==0) {
        count5++;
        num/=5;
    }
    return {count2,count5};
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;
    vector<long long> num(n);
    for(auto &i:num) cin>>i;
    
    vector<pair<int,int>> factors(n);
    int total5=0;
    for(int i=0;i<n;i++) {
        factors[i]=countFactor(num[i]);
        total5 += factors[i].second;
    }
    
    const int max5 = total5;
    vector<vector<int>> dp(k + 1, vector<int>(max5 + 1, -1));
    dp[0][0] = 0;
    
    for(int i = 0; i < n; i++) {
        int curr2 = factors[i].first;
        int curr5 = factors[i].second;
     
        for(int j = k; j >= 0; j--) {
            for(int l = max5; l >= 0; l--) {
                if(dp[j][l] == -1) continue;
                
        
                if(j + 1 <= k && l + curr5 <= max5) {
                    dp[j + 1][l + curr5] = max(dp[j + 1][l + curr5], dp[j][l] + curr2);
                }
            }
        }
    }
    
    int max_roundness = 0;
    for(int l = 0; l <= max5; l++) {
        if(dp[k][l] != -1) {
            max_roundness = max(max_roundness, min(l, dp[k][l]));
        }
    }
    cout << max_roundness << endl;
    return 0;
}