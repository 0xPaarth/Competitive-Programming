#include<bits/stdc++.h>
using namespace std;
const int V_MAX=300005;
int F[V_MAX];
vector<int>sufxmin[18];
void precompute(){
for(int x=1;x<V_MAX;x++)
	F[x]=__builtin_popcount(x)+31-__builtin_clz(x);
for(int m=0;m<=17;m++){
int step=1<<m;
int K=V_MAX/step+2;
sufxmin[m].assign(K,2000000000);
for(int k=K-2;k>=1;k--)
{
long long x=1LL*k*step;
if(x<V_MAX)sufxmin[m][k]=x+F[x];
sufxmin[m][k]=min(sufxmin[m][k],(k+1<K)?sufxmin[m][k+1]:2000000000);
 }
  }
}
void solve(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
	cin>>a[i];
long long ans=2000000000000000000LL;
for(int m=0;m<=17;m++){
long long cur=-1LL*(n-1)*m;
for(int i=0;i<n;i++){
int k=(a[i]+(1<<m)-1)>>m;
if(k==0)
	k=1;
if(k<sufxmin[m].size())
	cur+=sufxmin[m][k]-a[i];
else
 cur+=2000000000000000LL;
}
ans=min(ans,cur);
}
cout<<ans<<"
";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
precompute();
int t;
cin>>t;
while(t--)solve();
return 0;
}