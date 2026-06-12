#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int MAXV = 5e5 + 1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> spf(MAXV);
    iota(spf.begin(), spf.end(), 0);
    for(int i = 2; i * i < MAXV; i++){
        if(spf[i] == i){ 
            for(int j = i*i; j < MAXV; j += i){
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
        int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        unordered_map<int,long long> primeVal;
        
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            while(a > 1){
                int p = spf[a];
                int cnt = 0;
                while(a % p == 0){
                    cnt++;
                    a /= p;
                }
                primeVal[p] += cnt;
            }
        }
              long long ans = 1;
        for(auto& [p, sumV] : primeVal){
            ans = ans * ((1 + sumV) % MOD) % MOD;
        }
            cout << ans << "
";
    }
       return 0;
}