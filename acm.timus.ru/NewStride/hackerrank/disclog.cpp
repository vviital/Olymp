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
//#define pll pair<ll, ll>
//
//ll mulmod(ll a, ll b, ll mod){
//	ll ans = 0;
//	ll mul = a;
//	while(b){
//		if (b & 1)
//			ans = (ans + mul) % mod;
//		mul = (mul + mul) % mod;
//		b >>= 1;
//	}
//	return ans;
//}
//
//ll binpow(ll a, ll p, ll mod){
//	ll ans = 1;
//	ll mul = a;
//	while(p){
//		if (p & 1)
//			ans = mulmod(ans, mul, mod);
//		mul = mulmod(mul, mul, mod);
//		p >>= 1;
//	}
//	return ans;
//}
//
//int find(vector<pll> &v, ll x){
//	int l = -1, r = sz(v);
//	while(r - l > 1){
//		int middle = (l + r) >> 1;
//		if (v[middle].X < x) l = middle;
//		else r = middle;
//	}
//	if (r == sz(v)) return -1;
//	if (v[r].X == x) return -v[r].Y;
//	return -1;
//}
//
//void solve(){
//	ll a, b, mod, res = -1;
//	scanf("%lld%lld%lld", &a, &b, &mod);
//	ll block = sqrt(mod * 1.) + 100;
//	vector<pll> arr;
//	ll apowb = binpow(a, block, mod);
//	ll step = apowb;
//	ll cur = b;
//	forn(i, block + 1){
//		arr.pb(mp(cur, -i));
//		cur = mulmod(cur, a, mod);
//	}
//	sort(ALL(arr));
//	for(int i = 1; i <= block; ++i){
//		res = find(arr, apowb);
//		if (res != -1) {
//			res = i * block - res;
//			break;
//		}
//		apowb = mulmod(apowb, step, mod);
//	}
//	printf("%lld\n", res);
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
//	while(t--) solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
