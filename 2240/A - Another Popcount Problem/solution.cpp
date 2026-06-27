#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll total=0;
        for(ll j = 0; (1LL << j) <= n; j++)
        {
            ll wt=1LL<<j ; 
            ll m=k;
            if(n>=m*wt)
            {
                total+=m;
                n-=m*wt;
            }
            else
            {
                total += n / wt;
                break;
            }
        }
        cout<<total<<"
";
    }
    return 0;
}