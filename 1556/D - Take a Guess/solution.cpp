#include <bits/stdc++.h>
using namespace std;
int query_and(int i,int j) {
    cout<<"and "<<i<<" "<<j<<"
";
    cout.flush();
    int res;
    cin>>res;
    if(res==-1)
     exit(0);  
       return res;
}
int query_or(int i,int j){
    cout<<"or "<<i<<" " << j<<"
";
    cout.flush();
    int res;
    cin>>res;
    if(res==-1)
     exit(0);
    return res;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long> a(n+1);
    long long and12 = query_and(1,2);
    long long or12 = query_or(1,2);
    long long s12 = and12 + or12;
    long long and23 = query_and(2,3);
    long long or23 = query_or(2,3);
    long long s23 = and23 + or23;
    long long and13 = query_and(1,3);
    long long or13 = query_or(1,3);
    long long s13 = and13 + or13;
    a[1]=(s12+s13-s23)/2;
    a[2]=s12-a[1];
    a[3]=s13-a[1];
    for(int i = 4; i <= n; ++i) {
        long long and1i = query_and(1, i);
        long long or1i = query_or(1, i);
        a[i] = (and1i + or1i) - a[1];
    }
    vector<long long> sorted_a;
    for(int i = 1; i <= n; ++i) {
        sorted_a.push_back(a[i]);
    }
    sort(sorted_a.begin(), sorted_a.end());
    cout<<"finish "<<sorted_a[k - 1]<<endl;
    return 0;
}