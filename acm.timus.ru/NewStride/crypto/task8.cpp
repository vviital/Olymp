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
//ll mulmod(ll a, ll b, ll mod){
//	ll ans = 0;
//	ll mul = a;
//	while(b){
//		if (b & 1LL)
//			ans = (ans + mul) % mod;
//		mul = (mul + mul) % mod;
//		b >>= 1LL;
//	}
//	return ans;
//}
//
//ll binpow(ll a, ll p, ll mod){
//	ll ans = 1;
//	ll mul = a;
//	while(p){
//		if (p & 1LL)
//			ans = mulmod(ans, mul, mod);
//		mul = mulmod(mul, mul, mod);
//		p >>= 1LL;
//	}
//	return ans;
//}
//
//ll p, q, x0, k, r;
//
//int countBit(ll a){
//	int ans = 0;
//	while(a){
//		ans ^= a & 1LL;
//		a /= 2;
//	}
//	return ans ^ 1;
//}
//
//ll gcd(ll a, ll b){
//	while(b){
//		a %= b;
//		swap(a, b);
//	}
//	return a;
//}
//
//ll countFI(ll a){
//	return a - 1;
//}
//
//bool isPrime(ll val){
//	if (val == 1) return false;
//	bool ok = true;
//	for(ll i = 2; i * i <= val; i++){
//		if (val % i == 0) return false;
//	}
//	return ok;
//}
//
//void doh(){
//	printf("no\n");
//	exit(0);
//}
//
//void solve(){
//	if (p % 4 != 3 || q % 4 != 3) {
//		printf("no\n");
//		return;
//	}
//	if (!isPrime(p)){
//		printf("no\n");
//		return;
//	}
//	if (!isPrime(q)){
//		printf("no\n");
//		return;
//	}
//	ll phi1 = countFI(p);
//	ll phi2 = countFI(q);
//	if (gcd(phi1, phi2) > 3) doh();
//	ll mod = p * (ll)q;
//	for(int i = 0; i < 8 * k; ++i)
//		x0 = mulmod(x0, x0, mod);
//	vector<int> bits;
//	r *= 8;
//	for(int i=0; i < r; i++){
//		bits.pb(countBit(x0));
//		x0 = mulmod(x0, x0, mod);
//	}
//	forn(i, r) printf("%d", bits[i]);
//	printf("\n");
//	for(int i = 0; i < sz(bits); i += 4){
//		int cur = 0;
//		for(int j = 0; j < 4; ++j){
//			cur = cur * 2 + bits[i + j];
//		}
//		cout << hex << cur;
//	}
//	printf("\n");
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
//	cin >> p >> q >> x0 >> k >> r;
//	solve();
//#ifdef _DEBUG
//	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
//#endif
//	return 0;
//}
