#include <bits/stdc++.h>
using namespace std;
int countDigits(int x)
{
    int cnt=0;
    while(x>0){
        cnt++;
        x/=10;
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int d=countDigits(x);
        long long y=1;
        for(int i=0;i<d;i++){
            y*=10;
        }
        y+=1;
        cout<<y<<endl;
    }
    return 0;
}