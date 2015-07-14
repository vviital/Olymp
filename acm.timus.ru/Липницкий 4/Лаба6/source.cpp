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
#define fornl(i, n) for(ll i = 0; i < n; ++i)
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
#define pdd pair<double, double>
#define pll pair<ll, ll>

ll mulmod(ll a, ll b, ll mod){
	ll ans = 0;
	ll add = a;
	while(b){
		if (b & 1) ans = (ans + add) % mod;
		add = (add + add) % mod;
		b >>= 1;
	}
	return ans;
}

ll binpow(ll a, ll p, ll mod){
	ll answer = 1;
	ll mul = a;
	while(p){
		if (p & 1) answer = mulmod(answer, mul, mod);
		mul = mulmod(mul, mul, mod);
		p >>= 1LL;
	}
	return answer;
}

ll getrev(ll a, ll b){
	ll x1 = 1, y1 = 0;
	ll x2 = 0, y2 = 1;
	ll mod = b;

	while(b){
		ll q = a / b;
		a = a - q * b;
		swap(a, b);

		x1 = x1 - q * x2;
		swap(x1, x2);

		y1 = y1 - q * y2;
		swap(y1, y2);
	}
	return (x1 % mod + mod) % mod;
}

pll factor(ll a){
	pll ans(1,1);
	ll sq = min(a * 1. - 1, sqrt(a * 1.) + 1);
	for(ll i = sq; i >= 2; i--){
		if (a % i == 0){
			ans.X = i;
			ans.Y = a / i;
			break;
		}
	}
	return ans;
}

vector<ll> getsqrt(ll x, ll mod){
	vector<ll> ans;
	fornl(i, mod){
		if (mulmod(i,i,mod) == x) ans.pb(i);
	}
	return ans;
}

ll garner(ll a, ll b, ll p, ll q){
	ll n = p * q;
	ll val = mulmod(mulmod((b - a) % q + q, getrev(p, q),q), p, n) + a;
	return val % n;
}

void rabin(ll n, ll B, ll m){
	pll val = factor(n);
	ll d = (mulmod(mulmod(B, B, n), getrev(4, n),n) + m) % n;
	pll crt = mp(d % val.X, d % val.Y);
	vector<ll> sqrt1 = getsqrt(crt.X, val.X);
	vector<ll> sqrt2 = getsqrt(crt.Y, val.Y);
	vector<ll> C;
	forn(i, sz(sqrt1)) forn(j, sz(sqrt2)){
		C.pb(garner(sqrt1[i], sqrt2[j], val.X, val.Y));
	}
	ll rev2 = getrev(2, n);
	forn(i, sz(C)){
		ll ans = (C[i] - mulmod(B, rev2, n) + n) % n;
		cout << "d[" << i +1 << "] = " << C[i] << "\t";
		cout << "mes = " << ans << "\n";
	}
}

void Elgamal(ll P, ll g, ll h, ll Osk, ll m){
	ll cur = g;
	ll x = 0;
	fornl(i, P){
		if (cur == h) {
			x = i + 1;
			break;
		}
		cur = cur * (ll)g % P;
	}
	cout << "P = " << P << "\n";
	cout << "g = " << g << "\n";
	cout << "Osk = " << Osk << "\n";
	cout << "m = " << m << "\n";
	cout << "x = " << x << "\n";
	ll cc = binpow(g, x, P);
	ll K = binpow(Osk, x, P);
	ll revK = getrev(K, P);
	ll c = mulmod(m, revK, P);
	cout << c << "\n";
}

int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	/*ll P, g, h, m, Osk;
	cin >> P >> g >> h >> Osk >> m;
	Elgamal(P, g, h, Osk, m);*/
	/*ll n, B, m;
	cin >> n >> B >> m;
	rabin(n, B, m);*/
	ll n, e, m;
	cin >> n >> e >> m;
	pll val = factor(n);
	cout << "p = " << val.X << " q = " << val.Y << "\n";
	ll fi = (val.X - 1) * (val.Y - 1);
	ll d = getrev(e, fi);
	cout << "fi = " << fi << "\n";
	cout << "d = " << d << "\n";
	ll mes = binpow(m, d, n);
	cout << "mes = " << mes << "\n";
#ifndef _DEBUG
	cout << fixed << setprecision(15) << clock() * 1. /  CLOCKS_PER_SEC;
#endif
	return 0;
}
