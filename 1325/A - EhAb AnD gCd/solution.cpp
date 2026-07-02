#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x%2)
        cout<<1<<" "<<x-1<<endl;
        else
        cout<<x/2<<" "<<x/2<<endl;
    }
    return 0;
}