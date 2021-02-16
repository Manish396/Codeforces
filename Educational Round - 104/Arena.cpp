#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define pii pair<ll, ll>
#define vi vector<ll>
#define lead(x) builtin_clz(x)
#define trail(x) builtin_ctz(x)
#define bits(x) __builtin_popcount(x)
#define vpl vector<pii>
#define fore(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define IN(x, y) ((y).find((x)) != (y).end())
#define ALL(t) t.begin(), t.end()
const ll mod = 998244353;
bool isPowerOfTwo(ll x)
{
	return (x && !(x & (x - 1)));
}
//main Starts from here
int main()
{
	fastio;
	ll t = 1;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vi v(n);
		fore(i, n)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int i = 0;
		for (i = 1; i < n; i++)
		{
			if (v[i] != v[i - 1])
			{
				break;
			}
		}
		cout << n - i << endl;
	}
	return 0;
}
