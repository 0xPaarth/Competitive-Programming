#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000000;
int spf[MAXN+1];
void sieve(){
    for(int i=1;i<=MAXN;i++)
        spf[i]=i;
    for(int i=2;i*i<=MAXN;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=MAXN;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}
void solve(){
    int n;
    cin>>n;
    int total_factors=0;
    int distinct_factors=0;
    int temp=n;
    while(temp>1){
        int p=spf[temp];
        distinct_factors++;
        while(temp%p==0) {
            total_factors++;
            temp/=p;
        }
    }
    int ans=total_factors+distinct_factors-1;
    cout << ans << "
";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
        return 0;
}