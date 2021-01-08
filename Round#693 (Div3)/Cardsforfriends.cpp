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
		int w, h, n;
		cin >> w >> h >> n;
		ll tot = 1;
		if(w%2!=0 && h%2!=0){
			tot = 1;
		}
		else{
			while(h%2==0){
				tot=tot*2;
				h = h / 2;
			}
			while(w%2==0){
				tot = tot * 2;
				w = w / 2;
			}
		}
		// cout << tot << endl;
		if(tot>=n){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
