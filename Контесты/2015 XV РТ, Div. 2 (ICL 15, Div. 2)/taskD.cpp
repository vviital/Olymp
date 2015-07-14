#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cassert>

using namespace std;

typedef long long ll;
typedef double db;
typedef long double ldb;
typedef string str;

#define forn(i, n) for(int i = 0; i < n; ++i)
#define INF 1e+9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define X first
#define Y second
#define ms(x) memset(x, 0, sizeof(x))
#define ms1(x) memset(x, -1, sizeof(x))
#define sz(x) ( (int) x.size() )
#define len(x) ( (int) x.length() )
#define ALL(x) x.begin(), x.end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>

const int manx = 1e+6 + 100;
ll arr[manx];

ll gcd(ll a, ll b){
	while (b){
		a %= b;
		swap(a, b);
	}
	return a;
}

ll binpow(ll x, ll p, ll mod){
	ll mul = x;
	ll ans = 1;
	while (p){
		if (p & 1)
			ans = ans * p % mod;
		mul = mul * mul % mod;
		p >>= 1;
	}
	return ans;
}

pll calcF(ll n, ll p){
	ll fact1 = 1;
	ll fact2 = 1;
	for (int i = 1; i < p; i++)
		fact1 = fact1 * i % p;
	int to = n % p;
	for (int i = 1; i <= n % p; i++){
		fact2 = fact2 * i % p;
	}
	return mp(binpow(fact1, n / p, p) * fact2, n / p);
}

ll getrev(ll a, ll x){
	ll mod = x;
	ll x1 = 1, x2 = 0;
	ll y1 = 0, y2 = 1;
	
	while (x){
		ll q = a / x;

		a = a - q * x;
		swap(a, x);

		x1 = x1 - q * x2;
		swap(x1, x2);
	}
	return (x1 + mod) % mod;;
}

ll calc(ll n, ll k, ll p){
	pll p1 = calcF(n, p);
	pll p2 = calcF(k, p);
	pll p3 = calcF(n - k, p);
	p1.Y -= p2.Y + p3.Y;
	if (p1.Y > 0) return 0;
	return p1.X * getrev(p2.X, p) % p * getrev(p3.X, p) % p;
}

vector<ll> primes(ll m){
	vector<ll> ans;
	for (ll i = 2; i * i <= m; i++){
		if (m % i == 0){
			ll cond = 1;
			while (m % i == 0){
				m /= i;
				cond *= i;
			}
			ans.push_back(cond);
		}
	}
	if (m > 1) ans.push_back(m);
	return ans;
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	/*freopen(".in", "r", stdin);
	freopen(".out", "w", stdout);*/
#endif
	/*ll a = 12323233;
	ll mod = 1e+9 + 7;
	ll rev = getrev(a, mod);
	cout << a * rev % mod << "\n";*/
	ll n, k, m;
	cin >> n >> k >> m;
	ll ans = 1;
	vector<ll> prim = primes(m);
	forn(i, sz(prim)){
		ans = ans * calc(n, k, prim[i]) % m;
	}
	cout << ans << "\n";
#ifdef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
#endif
	return 0;
}