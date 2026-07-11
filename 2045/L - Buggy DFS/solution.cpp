#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long K;
    if (!(cin >> K)) return 0;
 
    for (long long x = 0; x <= 35000; ++x) {
        
        if (K % 2 != 0 && x % 2 == 0) continue;
 
        long long R = K - x * x - 5 * x - 2;
        
        if (R < 0) break;
 
        long long y = R / (x + 2);
        
        long long rem = R % (x + 2);
 
        if (rem % 2 != 0) {
            y--;
            rem += (x + 2);
        }
 
        if (y < 0) continue;
 
        long long c = rem / 2;
        long long k = x + c;
 
        long long N = k + y + 2;
        long long M = k + x + y + 1;
        
        if (N <= 32768 && M <= 65536) {
            cout << N << " " << M << "
";
            
            cout << "1 2
";
            
            if (k >= 1) {
                cout << "1 " << k + 2 << "
";
                
                for (long long i = 4; i <= k + 2; ++i) {
                    cout << i << " " << i - 1 << "
";
                }
            }
            
            for (long long i = 3; i <= x + 2; ++i) {
                cout << "2 " << i << "
";
            }
            
            for (long long j = 1; j <= y; ++j) {
                cout << "2 " << k + 2 + j << "
";
            }
            
            return 0;
        }
    }
 
    cout << "-1 -1
";
    return 0;
}