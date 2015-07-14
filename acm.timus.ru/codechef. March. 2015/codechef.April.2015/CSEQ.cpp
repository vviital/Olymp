//#include <iostream>
//#include <sstream>
//#include <fstream>
//#include <iomanip>
//#include <string>
//#include <algorithm>
//#include <cmath>
//#include <ctime>
//#include <vector>
//#include <stack>
//#include <map>
//#include <set>
//#include <queue>
//#include <cstring>
//#include <bitset>
//#include <cstdio>
//#include <cstdlib>
//#include <cassert>
//
//using namespace std;
//
//typedef long long ll;
//typedef double db;
//typedef long double ldb;
//typedef string str;
//
//#define forn(i, n) for(int i = 0; i < n; ++i)
//#define INF 1e+9
//#define EPS 1e-9
//#define PI 3.1415926535897932384626433832795
//#define mp(a, b) make_pair(a, b)
//#define pb(a) push_back(a)
//#define X first
//#define Y second
//#define ms(x) memset(x, 0, sizeof(x))
//#define ms1(x) memset(x, -1, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pdd pair<double, double>
//
//const int mod = 1e+6 + 3;
//
//ll fact[mod + 100];
//
//void precalc(){
//	forn(i, mod){
//		if (i == 0) fact[0] = 1;
//		else fact[i] = fact[i - 1] * (ll) i % mod;
//	}
//}
//
//ll binpow(ll n, ll p){
//	ll ans = 1;
//	ll mul = n;
//	while(p){
//		if (p & 1) ans = ans * mul % mod;
//		mul = mul * mul % mod;
//		p >>= 1;
//	}
//	return ans;
//}
//
//ll getrev(int n){
//	return binpow(n, mod - 2);
//}
//
//long long C(ll n, ll k){
//	if (n < k) return 0;
//	ll val1 = fact[n];
//	ll val2 = getrev(fact[k] * (ll)fact[n - k] % mod);
//	ll val3 = val1 * val2 % mod;
//	return val3;
//}
//
//long long calcC(ll n, ll k){
//	ll ans = 1;
//	while(n){
//		ll buf = C(n % mod, k % mod);
//		ans = ans * C(n % mod, k % mod) % mod;
//		n /= mod;
//		k /= mod;
//	}
//	ans -= 1;
//	if (ans < 0) ans += mod;
//	return ans;
//}
//
//void solve(){
//	int n, l, r;
//	scanf("%d%d%d", &n, &l, &r);
//	int count = r - l + 1;
//	cout << calcC(n + count, count) << "\n";
//}
//
//int main(){
//#ifdef _DEBUG
//	freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//	//freopen("input.txt", "r", stdin);
//	/*freopen("output.txt", "w", stdout);*/
//#endif
//	int t;
//	scanf("%d", &t);
//	precalc();
//	while(t--) solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
