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
		ll tot = (n * (n - 1)) / 2;
		ll win = tot / n;
		vector<vi> vec;
		ll gr = win * n;
		for (int i = 0; i < n; i++)
		{
			ll ar = n - (i + 1);
			vi v(ar);
			for (int i = 0; i < win && i < ar; i++)
			{
				v[i] = 1;
				gr--;
			}
			vec.push_back(v);
		}
		ll idx = 0;
		if (gr != 0)
		{
			for (auto &it : vec)
			{
				ll p = win - idx++;
				for (int i = it.size() - 1; i >= win; i--)
				{
					if (gr && p)
						it[i] = -1;
					gr--, p--;
					if (gr == 0 || p == 0)
					{
						break;
					}
				}
				if (gr == 0)
				{
					break;
				}
			}
		}
		for (auto it : vec)
		{
			for (auto sb : it)
			{
				cout << sb << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
