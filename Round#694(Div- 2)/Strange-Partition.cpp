#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
#define pii pair<ll, ll>
#define vi vector<ll>
#define vpl vector<ll>
#define fore(i,n) for(int (i)=0;(i)<(n);(i)++)
#define IN(x,y) ((y).find((x))!=(y).end())
#define ALL(t) t.begin(),t.end()
int main(){
	int t=1;
	cin >> t;
	while(t--){
		int n, y;
		cin >> n >> y;
		ll a=0, b = 0, c=0;
		vi v;
		fore(i, n){
			int x;
			cin >> x;
			a += ceil(double(x) / y);
			if(x%y!=0){
				b += x;
			}
			else{
				c += x;
			}
		}
		ll min = ceil(double(b) / y) + ceil(double(c) / y);
		cout << min << " " << a << endl;
	}
	return 0;
}
