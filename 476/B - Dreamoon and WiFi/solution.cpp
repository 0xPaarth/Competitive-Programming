#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1,s2;
	cin>>s1>>s2;
	int target=0;
	for(char c:s1)
	{
		if(c=='+')
			target++;
		else
			target--;
	}
	int current=0,k=0;
	for(char c:s2)
	{
		if(c=='+')
			current++;
		else if(c=='-')
			current--;
        else
        	k++;
	}
	int need=target-current;
	if((need+k)%2!=0){
		cout<<fixed<<setprecision(12)<<0.0<<endl;
		return 0;
	}
	int x=(need+k)/2;
	if(x<0||x>k)
	{
		cout<<fixed<<setprecision(12)<<0.0<<endl;
		return 0;
	}
	double favorable = 1;
    for (int i = 1; i <= x; i++) {
        favorable *= (k - i + 1);
        favorable /= i;
    }
     double total = pow(2.0, k);
    double ans = favorable / total;
 
    cout << fixed << setprecision(12) << ans << "
";
    return 0;
 
}